<template>
  <section class="panel-1525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1525");
const base = ref(1525);
const total = computed(() => base.value * 2);

function incrementar1525() {
  base.value++;
}
</script>
