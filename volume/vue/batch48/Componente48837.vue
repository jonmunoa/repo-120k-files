<template>
  <section class="panel-48837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48837");
const base = ref(48837);
const total = computed(() => base.value * 2);

function incrementar48837() {
  base.value++;
}
</script>
