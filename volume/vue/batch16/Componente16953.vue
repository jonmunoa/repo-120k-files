<template>
  <section class="panel-16953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16953");
const base = ref(16953);
const total = computed(() => base.value * 2);

function incrementar16953() {
  base.value++;
}
</script>
