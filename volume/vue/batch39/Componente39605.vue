<template>
  <section class="panel-39605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39605");
const base = ref(39605);
const total = computed(() => base.value * 2);

function incrementar39605() {
  base.value++;
}
</script>
