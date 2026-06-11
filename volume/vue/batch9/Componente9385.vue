<template>
  <section class="panel-9385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9385");
const base = ref(9385);
const total = computed(() => base.value * 2);

function incrementar9385() {
  base.value++;
}
</script>
