<template>
  <section class="panel-21297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21297");
const base = ref(21297);
const total = computed(() => base.value * 2);

function incrementar21297() {
  base.value++;
}
</script>
