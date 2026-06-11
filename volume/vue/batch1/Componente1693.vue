<template>
  <section class="panel-1693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1693");
const base = ref(1693);
const total = computed(() => base.value * 2);

function incrementar1693() {
  base.value++;
}
</script>
