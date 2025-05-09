#Using composition API


<template>
   <div>
        <h1>basics</h1>
        <h2>Name: {{ name }}</h2>
        <p v-if="status === 'active'">User is active</p>
        <p v-else-if="status === 'pending'">User is pending</p>
        <p v-else>User is inactive</p>

        <form @submit.prevent="addTask">
            <label for="newTask">Add Task</label>
            <input type="text" id="newTask" name="newTask" v-model="newTask">
            <button type="submit">Add</button>
        </form>


        <h3>Tasks:</h3>
        <ul>
          <li v-for="task in tasks">{{ task }}</li>
        </ul>
        <button @click="toggleStatus">change status</button>
      </div>  
</template>

<script>
import { ref } from  'vue';

export default {

  setup (){
    const name= ref('Pratusha');
    const status= ref('pending');
    const tasks = ref(['Task-1','Task-2','Task-3']);
    const newTask = ref('');


    const toggleStatus = () => {
      if(status.value === 'active'){
        status.value = 'pending';
      }else if (status.value === 'pending'){
        status.value = 'inactive';
      }else{
        status.value = 'active';
      }
    }

    const addTask = () => {
      if(newTask.value.trim() !== ''){
        tasks.value.push(newTask.value);
        newTask.value = '';
      }
    };

    return {
      name,
      status,
      tasks,
      newTask,
      toggleStatus,
      addTask
    }
   
  },
 
};
</script>

