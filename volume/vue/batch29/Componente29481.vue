<template>
  <section class="panel-29481">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29481");
const base = ref(29481);
const total = computed(() => base.value * 2);

function incrementar29481() {
  base.value++;
}
</script>
