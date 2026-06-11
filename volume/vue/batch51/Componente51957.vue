<template>
  <section class="panel-51957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51957");
const base = ref(51957);
const total = computed(() => base.value * 2);

function incrementar51957() {
  base.value++;
}
</script>
