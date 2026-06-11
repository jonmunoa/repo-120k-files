<template>
  <section class="panel-41345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41345");
const base = ref(41345);
const total = computed(() => base.value * 2);

function incrementar41345() {
  base.value++;
}
</script>
