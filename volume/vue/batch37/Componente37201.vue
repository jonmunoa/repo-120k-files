<template>
  <section class="panel-37201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37201");
const base = ref(37201);
const total = computed(() => base.value * 2);

function incrementar37201() {
  base.value++;
}
</script>
