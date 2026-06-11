<template>
  <section class="panel-8665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8665");
const base = ref(8665);
const total = computed(() => base.value * 2);

function incrementar8665() {
  base.value++;
}
</script>
