<template>
  <section class="panel-13585">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13585");
const base = ref(13585);
const total = computed(() => base.value * 2);

function incrementar13585() {
  base.value++;
}
</script>
