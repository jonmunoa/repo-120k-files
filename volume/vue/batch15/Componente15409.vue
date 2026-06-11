<template>
  <section class="panel-15409">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15409");
const base = ref(15409);
const total = computed(() => base.value * 2);

function incrementar15409() {
  base.value++;
}
</script>
