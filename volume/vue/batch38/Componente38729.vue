<template>
  <section class="panel-38729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38729");
const base = ref(38729);
const total = computed(() => base.value * 2);

function incrementar38729() {
  base.value++;
}
</script>
