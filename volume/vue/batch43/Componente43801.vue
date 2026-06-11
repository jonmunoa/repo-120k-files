<template>
  <section class="panel-43801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43801");
const base = ref(43801);
const total = computed(() => base.value * 2);

function incrementar43801() {
  base.value++;
}
</script>
