<template>
  <section class="panel-36309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36309");
const base = ref(36309);
const total = computed(() => base.value * 2);

function incrementar36309() {
  base.value++;
}
</script>
