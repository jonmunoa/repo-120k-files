<template>
  <section class="panel-29705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29705");
const base = ref(29705);
const total = computed(() => base.value * 2);

function incrementar29705() {
  base.value++;
}
</script>
