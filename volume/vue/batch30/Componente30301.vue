<template>
  <section class="panel-30301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30301");
const base = ref(30301);
const total = computed(() => base.value * 2);

function incrementar30301() {
  base.value++;
}
</script>
