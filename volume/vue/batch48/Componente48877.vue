<template>
  <section class="panel-48877">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48877");
const base = ref(48877);
const total = computed(() => base.value * 2);

function incrementar48877() {
  base.value++;
}
</script>
