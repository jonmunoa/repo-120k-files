<template>
  <section class="panel-21201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21201");
const base = ref(21201);
const total = computed(() => base.value * 2);

function incrementar21201() {
  base.value++;
}
</script>
