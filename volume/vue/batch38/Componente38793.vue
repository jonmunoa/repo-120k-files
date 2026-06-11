<template>
  <section class="panel-38793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38793");
const base = ref(38793);
const total = computed(() => base.value * 2);

function incrementar38793() {
  base.value++;
}
</script>
