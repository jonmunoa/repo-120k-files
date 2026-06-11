<template>
  <section class="panel-15053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15053");
const base = ref(15053);
const total = computed(() => base.value * 2);

function incrementar15053() {
  base.value++;
}
</script>
