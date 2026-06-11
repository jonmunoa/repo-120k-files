<template>
  <section class="panel-24837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24837");
const base = ref(24837);
const total = computed(() => base.value * 2);

function incrementar24837() {
  base.value++;
}
</script>
