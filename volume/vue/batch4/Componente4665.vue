<template>
  <section class="panel-4665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4665");
const base = ref(4665);
const total = computed(() => base.value * 2);

function incrementar4665() {
  base.value++;
}
</script>
