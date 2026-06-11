<template>
  <section class="panel-54701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54701");
const base = ref(54701);
const total = computed(() => base.value * 2);

function incrementar54701() {
  base.value++;
}
</script>
