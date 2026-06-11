<template>
  <section class="panel-29297">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29297");
const base = ref(29297);
const total = computed(() => base.value * 2);

function incrementar29297() {
  base.value++;
}
</script>
