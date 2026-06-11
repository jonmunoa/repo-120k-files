<template>
  <section class="panel-39793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39793");
const base = ref(39793);
const total = computed(() => base.value * 2);

function incrementar39793() {
  base.value++;
}
</script>
