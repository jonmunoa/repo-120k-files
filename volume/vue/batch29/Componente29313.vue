<template>
  <section class="panel-29313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29313");
const base = ref(29313);
const total = computed(() => base.value * 2);

function incrementar29313() {
  base.value++;
}
</script>
