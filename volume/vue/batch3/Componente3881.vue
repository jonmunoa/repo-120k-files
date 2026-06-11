<template>
  <section class="panel-3881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3881");
const base = ref(3881);
const total = computed(() => base.value * 2);

function incrementar3881() {
  base.value++;
}
</script>
