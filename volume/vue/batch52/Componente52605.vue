<template>
  <section class="panel-52605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52605");
const base = ref(52605);
const total = computed(() => base.value * 2);

function incrementar52605() {
  base.value++;
}
</script>
