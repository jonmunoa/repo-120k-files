<template>
  <section class="panel-30693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30693");
const base = ref(30693);
const total = computed(() => base.value * 2);

function incrementar30693() {
  base.value++;
}
</script>
