<template>
  <section class="panel-29413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29413");
const base = ref(29413);
const total = computed(() => base.value * 2);

function incrementar29413() {
  base.value++;
}
</script>
