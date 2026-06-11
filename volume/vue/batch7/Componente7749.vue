<template>
  <section class="panel-7749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7749");
const base = ref(7749);
const total = computed(() => base.value * 2);

function incrementar7749() {
  base.value++;
}
</script>
