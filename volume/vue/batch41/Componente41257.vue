<template>
  <section class="panel-41257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41257");
const base = ref(41257);
const total = computed(() => base.value * 2);

function incrementar41257() {
  base.value++;
}
</script>
