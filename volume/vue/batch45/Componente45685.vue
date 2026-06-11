<template>
  <section class="panel-45685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45685");
const base = ref(45685);
const total = computed(() => base.value * 2);

function incrementar45685() {
  base.value++;
}
</script>
