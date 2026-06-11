<template>
  <section class="panel-10201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10201");
const base = ref(10201);
const total = computed(() => base.value * 2);

function incrementar10201() {
  base.value++;
}
</script>
