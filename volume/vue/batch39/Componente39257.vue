<template>
  <section class="panel-39257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39257");
const base = ref(39257);
const total = computed(() => base.value * 2);

function incrementar39257() {
  base.value++;
}
</script>
