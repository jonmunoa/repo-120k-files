<template>
  <section class="panel-3781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3781");
const base = ref(3781);
const total = computed(() => base.value * 2);

function incrementar3781() {
  base.value++;
}
</script>
