<template>
  <section class="panel-23041">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23041");
const base = ref(23041);
const total = computed(() => base.value * 2);

function incrementar23041() {
  base.value++;
}
</script>
