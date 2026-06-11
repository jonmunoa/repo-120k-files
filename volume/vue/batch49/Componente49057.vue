<template>
  <section class="panel-49057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49057");
const base = ref(49057);
const total = computed(() => base.value * 2);

function incrementar49057() {
  base.value++;
}
</script>
