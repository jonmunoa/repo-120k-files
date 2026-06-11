<template>
  <section class="panel-52137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52137");
const base = ref(52137);
const total = computed(() => base.value * 2);

function incrementar52137() {
  base.value++;
}
</script>
