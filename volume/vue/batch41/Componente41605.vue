<template>
  <section class="panel-41605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41605");
const base = ref(41605);
const total = computed(() => base.value * 2);

function incrementar41605() {
  base.value++;
}
</script>
