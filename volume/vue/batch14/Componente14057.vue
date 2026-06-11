<template>
  <section class="panel-14057">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14057");
const base = ref(14057);
const total = computed(() => base.value * 2);

function incrementar14057() {
  base.value++;
}
</script>
