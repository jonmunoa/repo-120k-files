<template>
  <section class="panel-54113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54113");
const base = ref(54113);
const total = computed(() => base.value * 2);

function incrementar54113() {
  base.value++;
}
</script>
