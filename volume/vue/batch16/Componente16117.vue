<template>
  <section class="panel-16117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16117");
const base = ref(16117);
const total = computed(() => base.value * 2);

function incrementar16117() {
  base.value++;
}
</script>
