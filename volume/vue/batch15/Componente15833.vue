<template>
  <section class="panel-15833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15833");
const base = ref(15833);
const total = computed(() => base.value * 2);

function incrementar15833() {
  base.value++;
}
</script>
