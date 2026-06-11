<template>
  <section class="panel-31461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31461");
const base = ref(31461);
const total = computed(() => base.value * 2);

function incrementar31461() {
  base.value++;
}
</script>
