<template>
  <section class="panel-52913">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52913");
const base = ref(52913);
const total = computed(() => base.value * 2);

function incrementar52913() {
  base.value++;
}
</script>
