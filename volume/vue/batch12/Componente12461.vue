<template>
  <section class="panel-12461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12461");
const base = ref(12461);
const total = computed(() => base.value * 2);

function incrementar12461() {
  base.value++;
}
</script>
