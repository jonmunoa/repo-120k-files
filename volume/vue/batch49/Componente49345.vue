<template>
  <section class="panel-49345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49345");
const base = ref(49345);
const total = computed(() => base.value * 2);

function incrementar49345() {
  base.value++;
}
</script>
