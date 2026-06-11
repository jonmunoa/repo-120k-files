<template>
  <section class="panel-30701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30701");
const base = ref(30701);
const total = computed(() => base.value * 2);

function incrementar30701() {
  base.value++;
}
</script>
