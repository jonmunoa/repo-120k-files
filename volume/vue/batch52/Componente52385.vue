<template>
  <section class="panel-52385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52385");
const base = ref(52385);
const total = computed(() => base.value * 2);

function incrementar52385() {
  base.value++;
}
</script>
