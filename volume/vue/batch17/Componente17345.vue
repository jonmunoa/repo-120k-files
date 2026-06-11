<template>
  <section class="panel-17345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17345");
const base = ref(17345);
const total = computed(() => base.value * 2);

function incrementar17345() {
  base.value++;
}
</script>
