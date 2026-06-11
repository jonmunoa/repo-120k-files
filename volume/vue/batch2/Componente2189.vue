<template>
  <section class="panel-2189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2189");
const base = ref(2189);
const total = computed(() => base.value * 2);

function incrementar2189() {
  base.value++;
}
</script>
