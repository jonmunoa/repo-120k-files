<template>
  <section class="panel-117">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 117");
const base = ref(117);
const total = computed(() => base.value * 2);

function incrementar117() {
  base.value++;
}
</script>
