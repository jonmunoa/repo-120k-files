<template>
  <section class="panel-3237">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3237");
const base = ref(3237);
const total = computed(() => base.value * 2);

function incrementar3237() {
  base.value++;
}
</script>
