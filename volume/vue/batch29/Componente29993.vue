<template>
  <section class="panel-29993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29993");
const base = ref(29993);
const total = computed(() => base.value * 2);

function incrementar29993() {
  base.value++;
}
</script>
