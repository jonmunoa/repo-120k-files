<template>
  <section class="panel-29113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29113");
const base = ref(29113);
const total = computed(() => base.value * 2);

function incrementar29113() {
  base.value++;
}
</script>
