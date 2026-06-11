<template>
  <section class="panel-48665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48665");
const base = ref(48665);
const total = computed(() => base.value * 2);

function incrementar48665() {
  base.value++;
}
</script>
