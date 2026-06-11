<template>
  <section class="panel-39665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39665");
const base = ref(39665);
const total = computed(() => base.value * 2);

function incrementar39665() {
  base.value++;
}
</script>
