<template>
  <section class="panel-36201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36201");
const base = ref(36201);
const total = computed(() => base.value * 2);

function incrementar36201() {
  base.value++;
}
</script>
