<template>
  <section class="panel-36317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36317");
const base = ref(36317);
const total = computed(() => base.value * 2);

function incrementar36317() {
  base.value++;
}
</script>
