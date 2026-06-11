<template>
  <section class="panel-31057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31057");
const base = ref(31057);
const total = computed(() => base.value * 2);

function incrementar31057() {
  base.value++;
}
</script>
