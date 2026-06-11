<template>
  <section class="panel-43765">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43765");
const base = ref(43765);
const total = computed(() => base.value * 2);

function incrementar43765() {
  base.value++;
}
</script>
