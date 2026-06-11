<template>
  <section class="panel-25453">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25453");
const base = ref(25453);
const total = computed(() => base.value * 2);

function incrementar25453() {
  base.value++;
}
</script>
