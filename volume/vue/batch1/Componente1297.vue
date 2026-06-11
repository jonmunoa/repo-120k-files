<template>
  <section class="panel-1297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1297");
const base = ref(1297);
const total = computed(() => base.value * 2);

function incrementar1297() {
  base.value++;
}
</script>
