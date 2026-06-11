<template>
  <section class="panel-5585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5585");
const base = ref(5585);
const total = computed(() => base.value * 2);

function incrementar5585() {
  base.value++;
}
</script>
