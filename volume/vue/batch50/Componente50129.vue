<template>
  <section class="panel-50129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50129");
const base = ref(50129);
const total = computed(() => base.value * 2);

function incrementar50129() {
  base.value++;
}
</script>
