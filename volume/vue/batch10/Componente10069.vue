<template>
  <section class="panel-10069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10069");
const base = ref(10069);
const total = computed(() => base.value * 2);

function incrementar10069() {
  base.value++;
}
</script>
