<template>
  <section class="panel-7345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7345");
const base = ref(7345);
const total = computed(() => base.value * 2);

function incrementar7345() {
  base.value++;
}
</script>
