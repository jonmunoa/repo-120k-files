<template>
  <section class="panel-31201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31201");
const base = ref(31201);
const total = computed(() => base.value * 2);

function incrementar31201() {
  base.value++;
}
</script>
