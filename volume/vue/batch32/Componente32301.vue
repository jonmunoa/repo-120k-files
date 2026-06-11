<template>
  <section class="panel-32301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32301");
const base = ref(32301);
const total = computed(() => base.value * 2);

function incrementar32301() {
  base.value++;
}
</script>
