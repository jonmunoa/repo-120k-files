<template>
  <section class="panel-33385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33385");
const base = ref(33385);
const total = computed(() => base.value * 2);

function incrementar33385() {
  base.value++;
}
</script>
