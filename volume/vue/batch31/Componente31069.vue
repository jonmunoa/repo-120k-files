<template>
  <section class="panel-31069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31069");
const base = ref(31069);
const total = computed(() => base.value * 2);

function incrementar31069() {
  base.value++;
}
</script>
