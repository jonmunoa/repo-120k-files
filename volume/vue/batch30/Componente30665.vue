<template>
  <section class="panel-30665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30665");
const base = ref(30665);
const total = computed(() => base.value * 2);

function incrementar30665() {
  base.value++;
}
</script>
