<template>
  <section class="panel-22593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22593");
const base = ref(22593);
const total = computed(() => base.value * 2);

function incrementar22593() {
  base.value++;
}
</script>
