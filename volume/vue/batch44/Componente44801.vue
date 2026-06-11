<template>
  <section class="panel-44801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44801");
const base = ref(44801);
const total = computed(() => base.value * 2);

function incrementar44801() {
  base.value++;
}
</script>
