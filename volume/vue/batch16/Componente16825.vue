<template>
  <section class="panel-16825">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16825");
const base = ref(16825);
const total = computed(() => base.value * 2);

function incrementar16825() {
  base.value++;
}
</script>
