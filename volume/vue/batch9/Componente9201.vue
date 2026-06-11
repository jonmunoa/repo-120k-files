<template>
  <section class="panel-9201">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9201");
const base = ref(9201);
const total = computed(() => base.value * 2);

function incrementar9201() {
  base.value++;
}
</script>
