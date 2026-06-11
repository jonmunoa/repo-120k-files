<template>
  <section class="panel-54549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54549");
const base = ref(54549);
const total = computed(() => base.value * 2);

function incrementar54549() {
  base.value++;
}
</script>
