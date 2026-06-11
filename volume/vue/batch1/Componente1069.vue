<template>
  <section class="panel-1069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1069");
const base = ref(1069);
const total = computed(() => base.value * 2);

function incrementar1069() {
  base.value++;
}
</script>
