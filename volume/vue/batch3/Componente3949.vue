<template>
  <section class="panel-3949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3949");
const base = ref(3949);
const total = computed(() => base.value * 2);

function incrementar3949() {
  base.value++;
}
</script>
