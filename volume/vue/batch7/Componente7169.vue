<template>
  <section class="panel-7169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7169");
const base = ref(7169);
const total = computed(() => base.value * 2);

function incrementar7169() {
  base.value++;
}
</script>
