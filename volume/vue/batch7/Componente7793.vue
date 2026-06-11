<template>
  <section class="panel-7793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7793");
const base = ref(7793);
const total = computed(() => base.value * 2);

function incrementar7793() {
  base.value++;
}
</script>
