<template>
  <section class="panel-42297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42297");
const base = ref(42297);
const total = computed(() => base.value * 2);

function incrementar42297() {
  base.value++;
}
</script>
