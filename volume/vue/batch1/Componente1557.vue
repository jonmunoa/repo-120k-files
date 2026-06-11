<template>
  <section class="panel-1557">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1557");
const base = ref(1557);
const total = computed(() => base.value * 2);

function incrementar1557() {
  base.value++;
}
</script>
