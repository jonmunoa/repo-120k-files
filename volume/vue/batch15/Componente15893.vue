<template>
  <section class="panel-15893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15893");
const base = ref(15893);
const total = computed(() => base.value * 2);

function incrementar15893() {
  base.value++;
}
</script>
