#parent component :

<template>
  <Item title="Hello I am Pratii! from parent component." />
</template>

<script setup>
  import Item from './Item.vue';
</script>

#child 

<template>
    <h2>I am Prateeksha</h2>
    <h2>title is : {{ title }}</h2>
</template>
  
<script setup>
defineProps([ "title" ])
</script>


