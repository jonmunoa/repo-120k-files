<template>
  <section class="panel-31665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31665");
const base = ref(31665);
const total = computed(() => base.value * 2);

function incrementar31665() {
  base.value++;
}
</script>
