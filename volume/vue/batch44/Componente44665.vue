<template>
  <section class="panel-44665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44665");
const base = ref(44665);
const total = computed(() => base.value * 2);

function incrementar44665() {
  base.value++;
}
</script>
