<template>
  <section class="panel-50057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50057");
const base = ref(50057);
const total = computed(() => base.value * 2);

function incrementar50057() {
  base.value++;
}
</script>
