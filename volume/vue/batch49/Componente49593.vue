<template>
  <section class="panel-49593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49593");
const base = ref(49593);
const total = computed(() => base.value * 2);

function incrementar49593() {
  base.value++;
}
</script>
