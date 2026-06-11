<template>
  <section class="panel-23189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23189");
const base = ref(23189);
const total = computed(() => base.value * 2);

function incrementar23189() {
  base.value++;
}
</script>
