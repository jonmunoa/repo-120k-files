<template>
  <section class="panel-3517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3517");
const base = ref(3517);
const total = computed(() => base.value * 2);

function incrementar3517() {
  base.value++;
}
</script>
