<template>
  <section class="panel-24957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24957");
const base = ref(24957);
const total = computed(() => base.value * 2);

function incrementar24957() {
  base.value++;
}
</script>
