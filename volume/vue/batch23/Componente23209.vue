<template>
  <section class="panel-23209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23209");
const base = ref(23209);
const total = computed(() => base.value * 2);

function incrementar23209() {
  base.value++;
}
</script>
