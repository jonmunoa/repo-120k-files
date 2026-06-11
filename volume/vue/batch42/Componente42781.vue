<template>
  <section class="panel-42781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42781");
const base = ref(42781);
const total = computed(() => base.value * 2);

function incrementar42781() {
  base.value++;
}
</script>
