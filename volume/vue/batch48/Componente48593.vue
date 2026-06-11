<template>
  <section class="panel-48593">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48593");
const base = ref(48593);
const total = computed(() => base.value * 2);

function incrementar48593() {
  base.value++;
}
</script>
