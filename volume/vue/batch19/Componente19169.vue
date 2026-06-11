<template>
  <section class="panel-19169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19169");
const base = ref(19169);
const total = computed(() => base.value * 2);

function incrementar19169() {
  base.value++;
}
</script>
