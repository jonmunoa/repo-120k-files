<template>
  <section class="panel-1249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1249");
const base = ref(1249);
const total = computed(() => base.value * 2);

function incrementar1249() {
  base.value++;
}
</script>
