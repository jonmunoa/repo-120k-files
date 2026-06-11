<template>
  <section class="panel-19605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19605");
const base = ref(19605);
const total = computed(() => base.value * 2);

function incrementar19605() {
  base.value++;
}
</script>
