<template>
  <section class="panel-793">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 793");
const base = ref(793);
const total = computed(() => base.value * 2);

function incrementar793() {
  base.value++;
}
</script>
