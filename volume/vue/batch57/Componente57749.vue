<template>
  <section class="panel-57749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57749");
const base = ref(57749);
const total = computed(() => base.value * 2);

function incrementar57749() {
  base.value++;
}
</script>
