<template>
  <section class="panel-43913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43913");
const base = ref(43913);
const total = computed(() => base.value * 2);

function incrementar43913() {
  base.value++;
}
</script>
