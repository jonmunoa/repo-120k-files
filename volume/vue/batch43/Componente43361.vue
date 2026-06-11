<template>
  <section class="panel-43361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43361");
const base = ref(43361);
const total = computed(() => base.value * 2);

function incrementar43361() {
  base.value++;
}
</script>
