<template>
  <section class="panel-29317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29317");
const base = ref(29317);
const total = computed(() => base.value * 2);

function incrementar29317() {
  base.value++;
}
</script>
