<template>
  <section class="panel-9881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9881");
const base = ref(9881);
const total = computed(() => base.value * 2);

function incrementar9881() {
  base.value++;
}
</script>
