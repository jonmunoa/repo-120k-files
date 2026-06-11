<template>
  <section class="panel-36801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36801");
const base = ref(36801);
const total = computed(() => base.value * 2);

function incrementar36801() {
  base.value++;
}
</script>
