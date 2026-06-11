<template>
  <section class="panel-29809">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29809");
const base = ref(29809);
const total = computed(() => base.value * 2);

function incrementar29809() {
  base.value++;
}
</script>
