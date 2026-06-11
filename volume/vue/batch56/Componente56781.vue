<template>
  <section class="panel-56781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56781");
const base = ref(56781);
const total = computed(() => base.value * 2);

function incrementar56781() {
  base.value++;
}
</script>
