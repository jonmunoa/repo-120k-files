<template>
  <section class="panel-22345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22345");
const base = ref(22345);
const total = computed(() => base.value * 2);

function incrementar22345() {
  base.value++;
}
</script>
