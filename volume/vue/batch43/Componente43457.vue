<template>
  <section class="panel-43457">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43457");
const base = ref(43457);
const total = computed(() => base.value * 2);

function incrementar43457() {
  base.value++;
}
</script>
