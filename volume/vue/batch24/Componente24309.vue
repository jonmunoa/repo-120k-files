<template>
  <section class="panel-24309">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24309");
const base = ref(24309);
const total = computed(() => base.value * 2);

function incrementar24309() {
  base.value++;
}
</script>
