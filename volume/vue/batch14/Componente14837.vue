<template>
  <section class="panel-14837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14837");
const base = ref(14837);
const total = computed(() => base.value * 2);

function incrementar14837() {
  base.value++;
}
</script>
