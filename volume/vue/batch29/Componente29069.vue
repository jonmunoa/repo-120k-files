<template>
  <section class="panel-29069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29069");
const base = ref(29069);
const total = computed(() => base.value * 2);

function incrementar29069() {
  base.value++;
}
</script>
