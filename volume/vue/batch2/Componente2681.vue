<template>
  <section class="panel-2681">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2681");
const base = ref(2681);
const total = computed(() => base.value * 2);

function incrementar2681() {
  base.value++;
}
</script>
