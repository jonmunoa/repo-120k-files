<template>
  <section class="panel-21729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21729");
const base = ref(21729);
const total = computed(() => base.value * 2);

function incrementar21729() {
  base.value++;
}
</script>
