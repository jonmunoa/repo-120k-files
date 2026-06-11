<template>
  <section class="panel-3769">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3769");
const base = ref(3769);
const total = computed(() => base.value * 2);

function incrementar3769() {
  base.value++;
}
</script>
