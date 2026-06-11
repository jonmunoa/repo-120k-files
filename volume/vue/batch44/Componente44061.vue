<template>
  <section class="panel-44061">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44061");
const base = ref(44061);
const total = computed(() => base.value * 2);

function incrementar44061() {
  base.value++;
}
</script>
