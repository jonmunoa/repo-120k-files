<template>
  <section class="panel-44125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44125");
const base = ref(44125);
const total = computed(() => base.value * 2);

function incrementar44125() {
  base.value++;
}
</script>
