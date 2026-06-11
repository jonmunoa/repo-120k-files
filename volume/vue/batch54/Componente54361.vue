<template>
  <section class="panel-54361">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54361");
const base = ref(54361);
const total = computed(() => base.value * 2);

function incrementar54361() {
  base.value++;
}
</script>
