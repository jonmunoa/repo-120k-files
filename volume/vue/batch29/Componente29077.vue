<template>
  <section class="panel-29077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29077");
const base = ref(29077);
const total = computed(() => base.value * 2);

function incrementar29077() {
  base.value++;
}
</script>
