<template>
  <section class="panel-12405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12405");
const base = ref(12405);
const total = computed(() => base.value * 2);

function incrementar12405() {
  base.value++;
}
</script>
