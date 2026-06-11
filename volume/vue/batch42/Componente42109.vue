<template>
  <section class="panel-42109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42109");
const base = ref(42109);
const total = computed(() => base.value * 2);

function incrementar42109() {
  base.value++;
}
</script>
