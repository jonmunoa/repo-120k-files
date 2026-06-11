<template>
  <section class="panel-29733">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29733");
const base = ref(29733);
const total = computed(() => base.value * 2);

function incrementar29733() {
  base.value++;
}
</script>
