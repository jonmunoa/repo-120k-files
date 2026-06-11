<template>
  <section class="panel-43897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43897");
const base = ref(43897);
const total = computed(() => base.value * 2);

function incrementar43897() {
  base.value++;
}
</script>
