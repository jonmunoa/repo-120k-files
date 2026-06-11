<template>
  <section class="panel-44109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44109");
const base = ref(44109);
const total = computed(() => base.value * 2);

function incrementar44109() {
  base.value++;
}
</script>
