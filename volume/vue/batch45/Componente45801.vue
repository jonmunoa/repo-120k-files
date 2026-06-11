<template>
  <section class="panel-45801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45801");
const base = ref(45801);
const total = computed(() => base.value * 2);

function incrementar45801() {
  base.value++;
}
</script>
