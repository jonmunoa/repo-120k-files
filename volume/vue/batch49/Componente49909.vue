<template>
  <section class="panel-49909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49909");
const base = ref(49909);
const total = computed(() => base.value * 2);

function incrementar49909() {
  base.value++;
}
</script>
