<template>
  <section class="panel-50665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50665");
const base = ref(50665);
const total = computed(() => base.value * 2);

function incrementar50665() {
  base.value++;
}
</script>
