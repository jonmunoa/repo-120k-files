<template>
  <section class="panel-39057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39057");
const base = ref(39057);
const total = computed(() => base.value * 2);

function incrementar39057() {
  base.value++;
}
</script>
