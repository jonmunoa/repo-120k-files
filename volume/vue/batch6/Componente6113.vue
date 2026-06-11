<template>
  <section class="panel-6113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6113");
const base = ref(6113);
const total = computed(() => base.value * 2);

function incrementar6113() {
  base.value++;
}
</script>
