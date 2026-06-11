<template>
  <section class="panel-1201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1201");
const base = ref(1201);
const total = computed(() => base.value * 2);

function incrementar1201() {
  base.value++;
}
</script>
