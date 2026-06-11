<template>
  <section class="panel-45169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45169");
const base = ref(45169);
const total = computed(() => base.value * 2);

function incrementar45169() {
  base.value++;
}
</script>
