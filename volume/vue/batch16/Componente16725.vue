<template>
  <section class="panel-16725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16725");
const base = ref(16725);
const total = computed(() => base.value * 2);

function incrementar16725() {
  base.value++;
}
</script>
