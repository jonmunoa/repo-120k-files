<template>
  <section class="panel-54005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54005");
const base = ref(54005);
const total = computed(() => base.value * 2);

function incrementar54005() {
  base.value++;
}
</script>
