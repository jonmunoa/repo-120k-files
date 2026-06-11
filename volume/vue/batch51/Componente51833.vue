<template>
  <section class="panel-51833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51833");
const base = ref(51833);
const total = computed(() => base.value * 2);

function incrementar51833() {
  base.value++;
}
</script>
