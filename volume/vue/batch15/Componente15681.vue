<template>
  <section class="panel-15681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15681");
const base = ref(15681);
const total = computed(() => base.value * 2);

function incrementar15681() {
  base.value++;
}
</script>
