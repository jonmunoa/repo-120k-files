<template>
  <section class="panel-51345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51345");
const base = ref(51345);
const total = computed(() => base.value * 2);

function incrementar51345() {
  base.value++;
}
</script>
