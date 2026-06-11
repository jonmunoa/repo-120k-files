<template>
  <section class="panel-44593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44593");
const base = ref(44593);
const total = computed(() => base.value * 2);

function incrementar44593() {
  base.value++;
}
</script>
