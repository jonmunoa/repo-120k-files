<template>
  <section class="panel-15593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15593");
const base = ref(15593);
const total = computed(() => base.value * 2);

function incrementar15593() {
  base.value++;
}
</script>
