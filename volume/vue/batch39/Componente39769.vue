<template>
  <section class="panel-39769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39769");
const base = ref(39769);
const total = computed(() => base.value * 2);

function incrementar39769() {
  base.value++;
}
</script>
