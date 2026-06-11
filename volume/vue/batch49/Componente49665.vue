<template>
  <section class="panel-49665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49665");
const base = ref(49665);
const total = computed(() => base.value * 2);

function incrementar49665() {
  base.value++;
}
</script>
