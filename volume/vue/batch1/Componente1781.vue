<template>
  <section class="panel-1781">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1781");
const base = ref(1781);
const total = computed(() => base.value * 2);

function incrementar1781() {
  base.value++;
}
</script>
