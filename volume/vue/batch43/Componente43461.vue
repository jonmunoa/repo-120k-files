<template>
  <section class="panel-43461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43461");
const base = ref(43461);
const total = computed(() => base.value * 2);

function incrementar43461() {
  base.value++;
}
</script>
