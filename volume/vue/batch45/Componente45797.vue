<template>
  <section class="panel-45797">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45797");
const base = ref(45797);
const total = computed(() => base.value * 2);

function incrementar45797() {
  base.value++;
}
</script>
