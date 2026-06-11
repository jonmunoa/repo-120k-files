<template>
  <section class="panel-18189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18189");
const base = ref(18189);
const total = computed(() => base.value * 2);

function incrementar18189() {
  base.value++;
}
</script>
