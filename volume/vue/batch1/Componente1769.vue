<template>
  <section class="panel-1769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1769");
const base = ref(1769);
const total = computed(() => base.value * 2);

function incrementar1769() {
  base.value++;
}
</script>
