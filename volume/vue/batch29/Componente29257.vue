<template>
  <section class="panel-29257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29257");
const base = ref(29257);
const total = computed(() => base.value * 2);

function incrementar29257() {
  base.value++;
}
</script>
