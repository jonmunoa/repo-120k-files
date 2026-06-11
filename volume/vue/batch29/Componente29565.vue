<template>
  <section class="panel-29565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29565");
const base = ref(29565);
const total = computed(() => base.value * 2);

function incrementar29565() {
  base.value++;
}
</script>
