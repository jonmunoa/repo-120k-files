<template>
  <section class="panel-30957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30957");
const base = ref(30957);
const total = computed(() => base.value * 2);

function incrementar30957() {
  base.value++;
}
</script>
