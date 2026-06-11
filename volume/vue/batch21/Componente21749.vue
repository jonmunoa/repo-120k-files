<template>
  <section class="panel-21749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21749");
const base = ref(21749);
const total = computed(() => base.value * 2);

function incrementar21749() {
  base.value++;
}
</script>
