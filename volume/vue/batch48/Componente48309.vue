<template>
  <section class="panel-48309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48309");
const base = ref(48309);
const total = computed(() => base.value * 2);

function incrementar48309() {
  base.value++;
}
</script>
