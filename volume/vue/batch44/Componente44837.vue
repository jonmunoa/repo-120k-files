<template>
  <section class="panel-44837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44837");
const base = ref(44837);
const total = computed(() => base.value * 2);

function incrementar44837() {
  base.value++;
}
</script>
