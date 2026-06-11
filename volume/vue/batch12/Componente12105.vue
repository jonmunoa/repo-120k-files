<template>
  <section class="panel-12105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12105");
const base = ref(12105);
const total = computed(() => base.value * 2);

function incrementar12105() {
  base.value++;
}
</script>
