<template>
  <section class="panel-1881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1881");
const base = ref(1881);
const total = computed(() => base.value * 2);

function incrementar1881() {
  base.value++;
}
</script>
