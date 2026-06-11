<template>
  <section class="panel-3673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3673");
const base = ref(3673);
const total = computed(() => base.value * 2);

function incrementar3673() {
  base.value++;
}
</script>
