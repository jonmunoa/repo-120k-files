<template>
  <section class="panel-15557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15557");
const base = ref(15557);
const total = computed(() => base.value * 2);

function incrementar15557() {
  base.value++;
}
</script>
