<template>
  <section class="panel-54345">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54345");
const base = ref(54345);
const total = computed(() => base.value * 2);

function incrementar54345() {
  base.value++;
}
</script>
