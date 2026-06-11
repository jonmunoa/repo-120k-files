<template>
  <section class="panel-56525">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56525");
const base = ref(56525);
const total = computed(() => base.value * 2);

function incrementar56525() {
  base.value++;
}
</script>
