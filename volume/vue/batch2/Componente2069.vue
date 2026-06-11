<template>
  <section class="panel-2069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2069");
const base = ref(2069);
const total = computed(() => base.value * 2);

function incrementar2069() {
  base.value++;
}
</script>
