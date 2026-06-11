<template>
  <section class="panel-11753">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11753");
const base = ref(11753);
const total = computed(() => base.value * 2);

function incrementar11753() {
  base.value++;
}
</script>
