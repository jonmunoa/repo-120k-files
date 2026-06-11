<template>
  <section class="panel-4069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4069");
const base = ref(4069);
const total = computed(() => base.value * 2);

function incrementar4069() {
  base.value++;
}
</script>
