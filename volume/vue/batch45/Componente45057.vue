<template>
  <section class="panel-45057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45057");
const base = ref(45057);
const total = computed(() => base.value * 2);

function incrementar45057() {
  base.value++;
}
</script>
