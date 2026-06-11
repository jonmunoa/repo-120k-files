<template>
  <section class="panel-53841">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53841");
const base = ref(53841);
const total = computed(() => base.value * 2);

function incrementar53841() {
  base.value++;
}
</script>
