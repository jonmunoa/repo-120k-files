<template>
  <section class="panel-15749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15749");
const base = ref(15749);
const total = computed(() => base.value * 2);

function incrementar15749() {
  base.value++;
}
</script>
