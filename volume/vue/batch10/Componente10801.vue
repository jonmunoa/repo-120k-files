<template>
  <section class="panel-10801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10801");
const base = ref(10801);
const total = computed(() => base.value * 2);

function incrementar10801() {
  base.value++;
}
</script>
