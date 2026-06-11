<template>
  <section class="panel-31749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31749");
const base = ref(31749);
const total = computed(() => base.value * 2);

function incrementar31749() {
  base.value++;
}
</script>
