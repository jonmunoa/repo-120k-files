<template>
  <section class="panel-43857">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43857");
const base = ref(43857);
const total = computed(() => base.value * 2);

function incrementar43857() {
  base.value++;
}
</script>
