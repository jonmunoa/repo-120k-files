<template>
  <section class="panel-23125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23125");
const base = ref(23125);
const total = computed(() => base.value * 2);

function incrementar23125() {
  base.value++;
}
</script>
