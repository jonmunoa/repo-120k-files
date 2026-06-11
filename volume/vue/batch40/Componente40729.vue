<template>
  <section class="panel-40729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 40729");
const base = ref(40729);
const total = computed(() => base.value * 2);

function incrementar40729() {
  base.value++;
}
</script>
