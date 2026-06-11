<template>
  <section class="panel-48673">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48673");
const base = ref(48673);
const total = computed(() => base.value * 2);

function incrementar48673() {
  base.value++;
}
</script>
