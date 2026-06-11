<template>
  <section class="panel-10057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10057");
const base = ref(10057);
const total = computed(() => base.value * 2);

function incrementar10057() {
  base.value++;
}
</script>
