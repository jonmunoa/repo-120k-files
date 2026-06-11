<template>
  <section class="panel-52805">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52805");
const base = ref(52805);
const total = computed(() => base.value * 2);

function incrementar52805() {
  base.value++;
}
</script>
