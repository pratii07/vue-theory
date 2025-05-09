# Using option API 


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
export default {
  data (){
    return{
      name: 'Pratusha',
      status: 'pending',
      tasks :['Task-1','Task-2','Task-3'],
      newTask:''
    };
  },
  methods:{
    toggleStatus() {
      if(this.status === 'active'){
        this.status = 'pending';
      }else if (this.status === 'pending'){
        this.status = 'inactive';
      }else{
        this.status = 'active';

      }
    },
    addTask(){
      if(this.newTask.trim() !== ''){
        this.tasks.push(this.newTask);
        this.newTask = '';
      }
    }
  }
};
</script>

