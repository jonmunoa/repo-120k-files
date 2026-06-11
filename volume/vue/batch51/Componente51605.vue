<template>
  <section class="panel-51605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51605");
const base = ref(51605);
const total = computed(() => base.value * 2);

function incrementar51605() {
  base.value++;
}
</script>
