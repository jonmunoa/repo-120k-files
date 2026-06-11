<template>
  <section class="panel-41593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41593");
const base = ref(41593);
const total = computed(() => base.value * 2);

function incrementar41593() {
  base.value++;
}
</script>
