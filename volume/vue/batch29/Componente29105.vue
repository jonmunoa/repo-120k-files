<template>
  <section class="panel-29105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29105");
const base = ref(29105);
const total = computed(() => base.value * 2);

function incrementar29105() {
  base.value++;
}
</script>
