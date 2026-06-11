<template>
  <section class="panel-43701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43701");
const base = ref(43701);
const total = computed(() => base.value * 2);

function incrementar43701() {
  base.value++;
}
</script>
