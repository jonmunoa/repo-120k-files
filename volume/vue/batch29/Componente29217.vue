<template>
  <section class="panel-29217">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29217");
const base = ref(29217);
const total = computed(() => base.value * 2);

function incrementar29217() {
  base.value++;
}
</script>
