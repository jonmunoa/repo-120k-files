<template>
  <section class="panel-56105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56105");
const base = ref(56105);
const total = computed(() => base.value * 2);

function incrementar56105() {
  base.value++;
}
</script>
