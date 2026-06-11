<template>
  <section class="panel-19753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19753");
const base = ref(19753);
const total = computed(() => base.value * 2);

function incrementar19753() {
  base.value++;
}
</script>
