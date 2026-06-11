<template>
  <section class="panel-1729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1729");
const base = ref(1729);
const total = computed(() => base.value * 2);

function incrementar1729() {
  base.value++;
}
</script>
