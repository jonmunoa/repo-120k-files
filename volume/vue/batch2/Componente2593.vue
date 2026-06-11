<template>
  <section class="panel-2593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2593");
const base = ref(2593);
const total = computed(() => base.value * 2);

function incrementar2593() {
  base.value++;
}
</script>
