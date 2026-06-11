<template>
  <section class="panel-43957">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43957");
const base = ref(43957);
const total = computed(() => base.value * 2);

function incrementar43957() {
  base.value++;
}
</script>
