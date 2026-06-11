<template>
  <section class="panel-51233">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51233");
const base = ref(51233);
const total = computed(() => base.value * 2);

function incrementar51233() {
  base.value++;
}
</script>
