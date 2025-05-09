#Emit method : child ---> parent data transfer
#parent compo

<template>
  <div>
      <h1>Parent Component</h1>
      <h2>Counter Value: {{ counter }}</h2>
      <Item @updateCounter="updateCounter" />
    </div>
</template>

<script setup>
import { ref } from "vue";
import Item from "./Item.vue";

const counter = ref(0);

function updateCounter(v){
  if(v===0){
    counter.value = 0
  }
  else{
    counter.value += v
  }
}
</script>

#child compo

<template>
    <h2>Child component</h2>
    <button @click="increment">INCR</button>
    <button @click="decrement">DECR</button>
    <button @click="reset">RESET</button>

</template>
  
<script setup>
import { defineEmits } from "vue";

const abc = defineEmits(["updateCounter"])

function increment(){
    abc("updateCounter",+1)
}

function decrement(){
    abc("updateCounter",-1)
}

function reset(){
    abc("updateCounter",0)
}

</script>

