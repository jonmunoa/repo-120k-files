<template>
  <section class="panel-43677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43677");
const base = ref(43677);
const total = computed(() => base.value * 2);

function incrementar43677() {
  base.value++;
}
</script>
