<template>
  <section class="panel-7833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7833");
const base = ref(7833);
const total = computed(() => base.value * 2);

function incrementar7833() {
  base.value++;
}
</script>
