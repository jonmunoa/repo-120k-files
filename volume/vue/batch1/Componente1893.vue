<template>
  <section class="panel-1893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1893");
const base = ref(1893);
const total = computed(() => base.value * 2);

function incrementar1893() {
  base.value++;
}
</script>
