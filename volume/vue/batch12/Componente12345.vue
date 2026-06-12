<template>
  <section class="panel-12345">
    <h2>{{ titulo }} -- MODIFICADO</h2>
  </section>
</template>

<script setup>
import { ref } from "vue";
const titulo = ref("Panel 12345 v2");
</script>
