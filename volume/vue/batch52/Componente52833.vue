<template>
  <section class="panel-52833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52833");
const base = ref(52833);
const total = computed(() => base.value * 2);

function incrementar52833() {
  base.value++;
}
</script>
