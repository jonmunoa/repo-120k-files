<template>
  <section class="panel-49069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49069");
const base = ref(49069);
const total = computed(() => base.value * 2);

function incrementar49069() {
  base.value++;
}
</script>
