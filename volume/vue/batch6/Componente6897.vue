<template>
  <section class="panel-6897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6897");
const base = ref(6897);
const total = computed(() => base.value * 2);

function incrementar6897() {
  base.value++;
}
</script>
