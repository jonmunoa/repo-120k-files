<template>
  <section class="panel-32057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32057");
const base = ref(32057);
const total = computed(() => base.value * 2);

function incrementar32057() {
  base.value++;
}
</script>
