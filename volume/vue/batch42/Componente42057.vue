<template>
  <section class="panel-42057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42057");
const base = ref(42057);
const total = computed(() => base.value * 2);

function incrementar42057() {
  base.value++;
}
</script>
