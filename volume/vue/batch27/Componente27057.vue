<template>
  <section class="panel-27057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27057");
const base = ref(27057);
const total = computed(() => base.value * 2);

function incrementar27057() {
  base.value++;
}
</script>
