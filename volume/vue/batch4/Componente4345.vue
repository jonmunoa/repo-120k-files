<template>
  <section class="panel-4345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4345");
const base = ref(4345);
const total = computed(() => base.value * 2);

function incrementar4345() {
  base.value++;
}
</script>
