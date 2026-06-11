<template>
  <section class="panel-49341">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49341");
const base = ref(49341);
const total = computed(() => base.value * 2);

function incrementar49341() {
  base.value++;
}
</script>
