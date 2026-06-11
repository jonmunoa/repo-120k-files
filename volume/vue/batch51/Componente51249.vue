<template>
  <section class="panel-51249">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51249");
const base = ref(51249);
const total = computed(() => base.value * 2);

function incrementar51249() {
  base.value++;
}
</script>
