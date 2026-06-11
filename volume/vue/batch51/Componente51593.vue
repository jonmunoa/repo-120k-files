<template>
  <section class="panel-51593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51593");
const base = ref(51593);
const total = computed(() => base.value * 2);

function incrementar51593() {
  base.value++;
}
</script>
