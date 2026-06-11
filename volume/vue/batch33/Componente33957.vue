<template>
  <section class="panel-33957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33957");
const base = ref(33957);
const total = computed(() => base.value * 2);

function incrementar33957() {
  base.value++;
}
</script>
