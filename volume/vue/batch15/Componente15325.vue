<template>
  <section class="panel-15325">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15325");
const base = ref(15325);
const total = computed(() => base.value * 2);

function incrementar15325() {
  base.value++;
}
</script>
