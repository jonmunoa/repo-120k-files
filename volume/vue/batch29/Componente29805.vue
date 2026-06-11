<template>
  <section class="panel-29805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29805");
const base = ref(29805);
const total = computed(() => base.value * 2);

function incrementar29805() {
  base.value++;
}
</script>
