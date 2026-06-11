<template>
  <section class="panel-16533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16533");
const base = ref(16533);
const total = computed(() => base.value * 2);

function incrementar16533() {
  base.value++;
}
</script>
