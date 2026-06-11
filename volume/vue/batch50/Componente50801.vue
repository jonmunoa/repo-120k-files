<template>
  <section class="panel-50801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 50801");
const base = ref(50801);
const total = computed(() => base.value * 2);

function incrementar50801() {
  base.value++;
}
</script>
