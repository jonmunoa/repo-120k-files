<template>
  <section class="panel-12593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12593");
const base = ref(12593);
const total = computed(() => base.value * 2);

function incrementar12593() {
  base.value++;
}
</script>
