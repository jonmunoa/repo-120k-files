<template>
  <section class="panel-33909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33909");
const base = ref(33909);
const total = computed(() => base.value * 2);

function incrementar33909() {
  base.value++;
}
</script>
