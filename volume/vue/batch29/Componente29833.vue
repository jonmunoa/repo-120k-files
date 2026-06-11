<template>
  <section class="panel-29833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29833");
const base = ref(29833);
const total = computed(() => base.value * 2);

function incrementar29833() {
  base.value++;
}
</script>
