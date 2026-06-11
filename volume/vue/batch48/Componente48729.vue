<template>
  <section class="panel-48729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48729");
const base = ref(48729);
const total = computed(() => base.value * 2);

function incrementar48729() {
  base.value++;
}
</script>
