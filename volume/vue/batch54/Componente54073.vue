<template>
  <section class="panel-54073">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54073");
const base = ref(54073);
const total = computed(() => base.value * 2);

function incrementar54073() {
  base.value++;
}
</script>
