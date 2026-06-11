<template>
  <section class="panel-29813">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29813");
const base = ref(29813);
const total = computed(() => base.value * 2);

function incrementar29813() {
  base.value++;
}
</script>
