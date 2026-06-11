<template>
  <section class="panel-4317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4317");
const base = ref(4317);
const total = computed(() => base.value * 2);

function incrementar4317() {
  base.value++;
}
</script>
