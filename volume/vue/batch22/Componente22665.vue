<template>
  <section class="panel-22665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22665");
const base = ref(22665);
const total = computed(() => base.value * 2);

function incrementar22665() {
  base.value++;
}
</script>
