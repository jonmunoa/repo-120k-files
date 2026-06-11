<template>
  <section class="panel-1105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1105");
const base = ref(1105);
const total = computed(() => base.value * 2);

function incrementar1105() {
  base.value++;
}
</script>
