<template>
  <section class="panel-30517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30517");
const base = ref(30517);
const total = computed(() => base.value * 2);

function incrementar30517() {
  base.value++;
}
</script>
