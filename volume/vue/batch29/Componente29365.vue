<template>
  <section class="panel-29365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29365");
const base = ref(29365);
const total = computed(() => base.value * 2);

function incrementar29365() {
  base.value++;
}
</script>
