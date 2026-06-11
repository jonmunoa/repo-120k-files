<template>
  <section class="panel-149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 149");
const base = ref(149);
const total = computed(() => base.value * 2);

function incrementar149() {
  base.value++;
}
</script>
