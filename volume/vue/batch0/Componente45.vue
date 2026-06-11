<template>
  <section class="panel-45">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45");
const base = ref(45);
const total = computed(() => base.value * 2);

function incrementar45() {
  base.value++;
}
</script>
