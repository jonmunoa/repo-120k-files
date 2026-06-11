<template>
  <section class="panel-3901">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3901");
const base = ref(3901);
const total = computed(() => base.value * 2);

function incrementar3901() {
  base.value++;
}
</script>
