<template>
  <section class="panel-2057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2057");
const base = ref(2057);
const total = computed(() => base.value * 2);

function incrementar2057() {
  base.value++;
}
</script>
