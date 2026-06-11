<template>
  <section class="panel-32117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32117");
const base = ref(32117);
const total = computed(() => base.value * 2);

function incrementar32117() {
  base.value++;
}
</script>
