<template>
  <section class="panel-19781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19781");
const base = ref(19781);
const total = computed(() => base.value * 2);

function incrementar19781() {
  base.value++;
}
</script>
