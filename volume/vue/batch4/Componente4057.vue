<template>
  <section class="panel-4057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4057");
const base = ref(4057);
const total = computed(() => base.value * 2);

function incrementar4057() {
  base.value++;
}
</script>
