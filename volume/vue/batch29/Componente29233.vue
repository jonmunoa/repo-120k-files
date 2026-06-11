<template>
  <section class="panel-29233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29233");
const base = ref(29233);
const total = computed(() => base.value * 2);

function incrementar29233() {
  base.value++;
}
</script>
