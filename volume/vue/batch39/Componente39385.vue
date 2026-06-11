<template>
  <section class="panel-39385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39385");
const base = ref(39385);
const total = computed(() => base.value * 2);

function incrementar39385() {
  base.value++;
}
</script>
