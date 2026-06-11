<template>
  <section class="panel-3069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3069");
const base = ref(3069);
const total = computed(() => base.value * 2);

function incrementar3069() {
  base.value++;
}
</script>
