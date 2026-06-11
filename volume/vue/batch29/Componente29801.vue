<template>
  <section class="panel-29801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29801");
const base = ref(29801);
const total = computed(() => base.value * 2);

function incrementar29801() {
  base.value++;
}
</script>
