<template>
  <section class="panel-56057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56057");
const base = ref(56057);
const total = computed(() => base.value * 2);

function incrementar56057() {
  base.value++;
}
</script>
