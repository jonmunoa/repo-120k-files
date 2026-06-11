<template>
  <section class="panel-385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 385");
const base = ref(385);
const total = computed(() => base.value * 2);

function incrementar385() {
  base.value++;
}
</script>
