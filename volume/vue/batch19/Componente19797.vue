<template>
  <section class="panel-19797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19797");
const base = ref(19797);
const total = computed(() => base.value * 2);

function incrementar19797() {
  base.value++;
}
</script>
