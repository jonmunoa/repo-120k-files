<template>
  <section class="panel-17729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17729");
const base = ref(17729);
const total = computed(() => base.value * 2);

function incrementar17729() {
  base.value++;
}
</script>
