<template>
  <section class="panel-36729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36729");
const base = ref(36729);
const total = computed(() => base.value * 2);

function incrementar36729() {
  base.value++;
}
</script>
