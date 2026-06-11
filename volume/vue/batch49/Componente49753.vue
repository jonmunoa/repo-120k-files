<template>
  <section class="panel-49753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49753");
const base = ref(49753);
const total = computed(() => base.value * 2);

function incrementar49753() {
  base.value++;
}
</script>
