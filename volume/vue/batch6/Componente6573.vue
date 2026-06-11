<template>
  <section class="panel-6573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6573");
const base = ref(6573);
const total = computed(() => base.value * 2);

function incrementar6573() {
  base.value++;
}
</script>
