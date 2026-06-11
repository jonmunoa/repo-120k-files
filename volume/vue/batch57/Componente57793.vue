<template>
  <section class="panel-57793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 57793");
const base = ref(57793);
const total = computed(() => base.value * 2);

function incrementar57793() {
  base.value++;
}
</script>
