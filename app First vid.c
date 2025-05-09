//app.vue :- First vid

<template>
  <!-- <div class="text-3xl font-bold underline bg-red-200">Hello Vue with Tailwind</div> -->
  <nav>
    <router-link to="/"></router-link>
    <router-link to="/about"></router-link>

  </nav>
  <RouterView></RouterView>
  <Navbar />
  <Hero />
  <HomeCards />
  <JobListing />
  <Footer />
</template>

<script setup>

import Navbar from './components/Navbar.vue';
import Hero from './components/Hero.vue';
import HomeCards from './components/HomeCards.vue';
import JobListing from './components/JobListing.vue';
import Footer from './components/Footer.vue';

</script>

<style >

</style>
