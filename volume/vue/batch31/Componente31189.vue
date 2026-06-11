<template>
  <section class="panel-31189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31189");
const base = ref(31189);
const total = computed(() => base.value * 2);

function incrementar31189() {
  base.value++;
}
</script>
