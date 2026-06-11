<template>
  <section class="panel-43069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43069");
const base = ref(43069);
const total = computed(() => base.value * 2);

function incrementar43069() {
  base.value++;
}
</script>
