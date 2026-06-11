<template>
  <section class="panel-32837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32837");
const base = ref(32837);
const total = computed(() => base.value * 2);

function incrementar32837() {
  base.value++;
}
</script>
