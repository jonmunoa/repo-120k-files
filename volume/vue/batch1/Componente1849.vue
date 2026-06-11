<template>
  <section class="panel-1849">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1849");
const base = ref(1849);
const total = computed(() => base.value * 2);

function incrementar1849() {
  base.value++;
}
</script>
