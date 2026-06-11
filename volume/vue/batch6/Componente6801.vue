<template>
  <section class="panel-6801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6801");
const base = ref(6801);
const total = computed(() => base.value * 2);

function incrementar6801() {
  base.value++;
}
</script>
