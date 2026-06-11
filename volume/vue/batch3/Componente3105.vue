<template>
  <section class="panel-3105">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3105");
const base = ref(3105);
const total = computed(() => base.value * 2);

function incrementar3105() {
  base.value++;
}
</script>
