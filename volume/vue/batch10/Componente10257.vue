<template>
  <section class="panel-10257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10257");
const base = ref(10257);
const total = computed(() => base.value * 2);

function incrementar10257() {
  base.value++;
}
</script>
