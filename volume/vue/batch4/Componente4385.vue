<template>
  <section class="panel-4385">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4385");
const base = ref(4385);
const total = computed(() => base.value * 2);

function incrementar4385() {
  base.value++;
}
</script>
