<template>
  <section class="panel-43845">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43845");
const base = ref(43845);
const total = computed(() => base.value * 2);

function incrementar43845() {
  base.value++;
}
</script>
