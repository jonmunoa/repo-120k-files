<template>
  <section class="panel-44729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44729");
const base = ref(44729);
const total = computed(() => base.value * 2);

function incrementar44729() {
  base.value++;
}
</script>
