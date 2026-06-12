<template>
  <section class="panel-1">
    <h2>{{ titulo }} -- MODIFICADO</h2>
  </section>
</template>

<script setup>
import { ref } from "vue";
const titulo = ref("Panel 1 v2");
</script>
