<template>
  <section class="panel-43173">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43173");
const base = ref(43173);
const total = computed(() => base.value * 2);

function incrementar43173() {
  base.value++;
}
</script>
