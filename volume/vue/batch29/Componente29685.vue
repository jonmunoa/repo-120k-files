<template>
  <section class="panel-29685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29685");
const base = ref(29685);
const total = computed(() => base.value * 2);

function incrementar29685() {
  base.value++;
}
</script>
