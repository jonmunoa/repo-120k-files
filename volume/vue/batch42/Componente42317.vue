<template>
  <section class="panel-42317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42317");
const base = ref(42317);
const total = computed(() => base.value * 2);

function incrementar42317() {
  base.value++;
}
</script>
