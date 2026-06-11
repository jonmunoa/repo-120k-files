<template>
  <section class="panel-29689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29689");
const base = ref(29689);
const total = computed(() => base.value * 2);

function incrementar29689() {
  base.value++;
}
</script>
