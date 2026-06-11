<template>
  <section class="panel-52345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52345");
const base = ref(52345);
const total = computed(() => base.value * 2);

function incrementar52345() {
  base.value++;
}
</script>
