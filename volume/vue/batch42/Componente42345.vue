<template>
  <section class="panel-42345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42345");
const base = ref(42345);
const total = computed(() => base.value * 2);

function incrementar42345() {
  base.value++;
}
</script>
