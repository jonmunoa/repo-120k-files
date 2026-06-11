<template>
  <section class="panel-23137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23137");
const base = ref(23137);
const total = computed(() => base.value * 2);

function incrementar23137() {
  base.value++;
}
</script>
