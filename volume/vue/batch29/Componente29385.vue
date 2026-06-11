<template>
  <section class="panel-29385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29385");
const base = ref(29385);
const total = computed(() => base.value * 2);

function incrementar29385() {
  base.value++;
}
</script>
