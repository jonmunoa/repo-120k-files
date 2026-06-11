<template>
  <section class="panel-23569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23569");
const base = ref(23569);
const total = computed(() => base.value * 2);

function incrementar23569() {
  base.value++;
}
</script>
