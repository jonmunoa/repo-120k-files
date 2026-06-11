<template>
  <section class="panel-49837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49837");
const base = ref(49837);
const total = computed(() => base.value * 2);

function incrementar49837() {
  base.value++;
}
</script>
