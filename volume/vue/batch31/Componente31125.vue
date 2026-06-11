<template>
  <section class="panel-31125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31125");
const base = ref(31125);
const total = computed(() => base.value * 2);

function incrementar31125() {
  base.value++;
}
</script>
