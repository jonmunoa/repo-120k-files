<template>
  <section class="panel-801">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 801");
const base = ref(801);
const total = computed(() => base.value * 2);

function incrementar801() {
  base.value++;
}
</script>
