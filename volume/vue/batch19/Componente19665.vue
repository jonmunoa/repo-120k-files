<template>
  <section class="panel-19665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19665");
const base = ref(19665);
const total = computed(() => base.value * 2);

function incrementar19665() {
  base.value++;
}
</script>
