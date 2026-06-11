<template>
  <section class="panel-4753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4753");
const base = ref(4753);
const total = computed(() => base.value * 2);

function incrementar4753() {
  base.value++;
}
</script>
