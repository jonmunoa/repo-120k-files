<template>
  <section class="panel-10413">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10413");
const base = ref(10413);
const total = computed(() => base.value * 2);

function incrementar10413() {
  base.value++;
}
</script>
