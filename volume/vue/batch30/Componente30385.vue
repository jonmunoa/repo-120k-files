<template>
  <section class="panel-30385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30385");
const base = ref(30385);
const total = computed(() => base.value * 2);

function incrementar30385() {
  base.value++;
}
</script>
