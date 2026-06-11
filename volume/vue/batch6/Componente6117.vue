<template>
  <section class="panel-6117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6117");
const base = ref(6117);
const total = computed(() => base.value * 2);

function incrementar6117() {
  base.value++;
}
</script>
