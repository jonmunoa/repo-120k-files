<template>
  <section class="panel-35801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 35801");
const base = ref(35801);
const total = computed(() => base.value * 2);

function incrementar35801() {
  base.value++;
}
</script>
