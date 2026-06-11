<template>
  <section class="panel-53461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 53461");
const base = ref(53461);
const total = computed(() => base.value * 2);

function incrementar53461() {
  base.value++;
}
</script>
