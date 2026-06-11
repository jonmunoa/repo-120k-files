<template>
  <section class="panel-29057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29057");
const base = ref(29057);
const total = computed(() => base.value * 2);

function incrementar29057() {
  base.value++;
}
</script>
