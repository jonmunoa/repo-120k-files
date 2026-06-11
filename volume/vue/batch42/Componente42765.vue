<template>
  <section class="panel-42765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42765");
const base = ref(42765);
const total = computed(() => base.value * 2);

function incrementar42765() {
  base.value++;
}
</script>
