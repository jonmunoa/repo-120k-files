<template>
  <section class="panel-23557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23557");
const base = ref(23557);
const total = computed(() => base.value * 2);

function incrementar23557() {
  base.value++;
}
</script>
