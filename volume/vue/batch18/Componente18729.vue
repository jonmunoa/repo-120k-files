<template>
  <section class="panel-18729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18729");
const base = ref(18729);
const total = computed(() => base.value * 2);

function incrementar18729() {
  base.value++;
}
</script>
