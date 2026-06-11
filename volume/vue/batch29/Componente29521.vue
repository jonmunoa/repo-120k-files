<template>
  <section class="panel-29521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29521");
const base = ref(29521);
const total = computed(() => base.value * 2);

function incrementar29521() {
  base.value++;
}
</script>
