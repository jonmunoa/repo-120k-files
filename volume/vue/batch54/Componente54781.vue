<template>
  <section class="panel-54781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54781");
const base = ref(54781);
const total = computed(() => base.value * 2);

function incrementar54781() {
  base.value++;
}
</script>
