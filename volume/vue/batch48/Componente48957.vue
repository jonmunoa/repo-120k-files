<template>
  <section class="panel-48957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48957");
const base = ref(48957);
const total = computed(() => base.value * 2);

function incrementar48957() {
  base.value++;
}
</script>
