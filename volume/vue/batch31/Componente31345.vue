<template>
  <section class="panel-31345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31345");
const base = ref(31345);
const total = computed(() => base.value * 2);

function incrementar31345() {
  base.value++;
}
</script>
