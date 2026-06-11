<template>
  <section class="panel-52057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52057");
const base = ref(52057);
const total = computed(() => base.value * 2);

function incrementar52057() {
  base.value++;
}
</script>
