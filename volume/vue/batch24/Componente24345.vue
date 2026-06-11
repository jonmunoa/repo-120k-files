<template>
  <section class="panel-24345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24345");
const base = ref(24345);
const total = computed(() => base.value * 2);

function incrementar24345() {
  base.value++;
}
</script>
