<template>
  <section class="panel-29861">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29861");
const base = ref(29861);
const total = computed(() => base.value * 2);

function incrementar29861() {
  base.value++;
}
</script>
