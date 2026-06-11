<template>
  <section class="panel-54817">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54817");
const base = ref(54817);
const total = computed(() => base.value * 2);

function incrementar54817() {
  base.value++;
}
</script>
