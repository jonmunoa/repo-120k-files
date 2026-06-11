<template>
  <section class="panel-7057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7057");
const base = ref(7057);
const total = computed(() => base.value * 2);

function incrementar7057() {
  base.value++;
}
</script>
