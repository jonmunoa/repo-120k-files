<template>
  <section class="panel-29693">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29693");
const base = ref(29693);
const total = computed(() => base.value * 2);

function incrementar29693() {
  base.value++;
}
</script>
