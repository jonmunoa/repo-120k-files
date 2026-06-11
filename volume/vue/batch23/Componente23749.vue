<template>
  <section class="panel-23749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23749");
const base = ref(23749);
const total = computed(() => base.value * 2);

function incrementar23749() {
  base.value++;
}
</script>
