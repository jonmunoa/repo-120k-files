<template>
  <section class="panel-11057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11057");
const base = ref(11057);
const total = computed(() => base.value * 2);

function incrementar11057() {
  base.value++;
}
</script>
