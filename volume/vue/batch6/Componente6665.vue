<template>
  <section class="panel-6665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6665");
const base = ref(6665);
const total = computed(() => base.value * 2);

function incrementar6665() {
  base.value++;
}
</script>
