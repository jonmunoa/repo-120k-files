<template>
  <section class="panel-6765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6765");
const base = ref(6765);
const total = computed(() => base.value * 2);

function incrementar6765() {
  base.value++;
}
</script>
