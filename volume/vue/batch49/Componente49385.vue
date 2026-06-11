<template>
  <section class="panel-49385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49385");
const base = ref(49385);
const total = computed(() => base.value * 2);

function incrementar49385() {
  base.value++;
}
</script>
