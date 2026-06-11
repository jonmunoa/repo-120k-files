<template>
  <section class="panel-12885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12885");
const base = ref(12885);
const total = computed(() => base.value * 2);

function incrementar12885() {
  base.value++;
}
</script>
