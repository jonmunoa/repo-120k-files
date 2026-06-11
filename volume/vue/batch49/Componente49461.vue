<template>
  <section class="panel-49461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49461");
const base = ref(49461);
const total = computed(() => base.value * 2);

function incrementar49461() {
  base.value++;
}
</script>
