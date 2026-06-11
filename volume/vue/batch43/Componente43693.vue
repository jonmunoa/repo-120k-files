<template>
  <section class="panel-43693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43693");
const base = ref(43693);
const total = computed(() => base.value * 2);

function incrementar43693() {
  base.value++;
}
</script>
