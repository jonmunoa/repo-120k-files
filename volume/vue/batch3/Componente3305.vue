<template>
  <section class="panel-3305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3305");
const base = ref(3305);
const total = computed(() => base.value * 2);

function incrementar3305() {
  base.value++;
}
</script>
