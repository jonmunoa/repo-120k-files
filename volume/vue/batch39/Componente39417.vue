<template>
  <section class="panel-39417">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39417");
const base = ref(39417);
const total = computed(() => base.value * 2);

function incrementar39417() {
  base.value++;
}
</script>
