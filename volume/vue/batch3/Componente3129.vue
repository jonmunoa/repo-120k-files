<template>
  <section class="panel-3129">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3129");
const base = ref(3129);
const total = computed(() => base.value * 2);

function incrementar3129() {
  base.value++;
}
</script>
