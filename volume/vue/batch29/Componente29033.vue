<template>
  <section class="panel-29033">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29033");
const base = ref(29033);
const total = computed(() => base.value * 2);

function incrementar29033() {
  base.value++;
}
</script>
