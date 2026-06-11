<template>
  <section class="panel-31957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31957");
const base = ref(31957);
const total = computed(() => base.value * 2);

function incrementar31957() {
  base.value++;
}
</script>
