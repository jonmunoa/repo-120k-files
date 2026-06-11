<template>
  <section class="panel-9801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9801");
const base = ref(9801);
const total = computed(() => base.value * 2);

function incrementar9801() {
  base.value++;
}
</script>
