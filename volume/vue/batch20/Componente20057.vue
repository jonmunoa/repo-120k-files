<template>
  <section class="panel-20057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20057");
const base = ref(20057);
const total = computed(() => base.value * 2);

function incrementar20057() {
  base.value++;
}
</script>
