<template>
  <section class="panel-1765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1765");
const base = ref(1765);
const total = computed(() => base.value * 2);

function incrementar1765() {
  base.value++;
}
</script>
