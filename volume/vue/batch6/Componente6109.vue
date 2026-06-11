<template>
  <section class="panel-6109">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6109");
const base = ref(6109);
const total = computed(() => base.value * 2);

function incrementar6109() {
  base.value++;
}
</script>
