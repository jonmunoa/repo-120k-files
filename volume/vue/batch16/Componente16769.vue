<template>
  <section class="panel-16769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16769");
const base = ref(16769);
const total = computed(() => base.value * 2);

function incrementar16769() {
  base.value++;
}
</script>
