<template>
  <section class="panel-15801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15801");
const base = ref(15801);
const total = computed(() => base.value * 2);

function incrementar15801() {
  base.value++;
}
</script>
