<template>
  <section class="panel-56593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56593");
const base = ref(56593);
const total = computed(() => base.value * 2);

function incrementar56593() {
  base.value++;
}
</script>
