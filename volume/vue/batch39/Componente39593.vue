<template>
  <section class="panel-39593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39593");
const base = ref(39593);
const total = computed(() => base.value * 2);

function incrementar39593() {
  base.value++;
}
</script>
