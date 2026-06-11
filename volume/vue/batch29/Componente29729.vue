<template>
  <section class="panel-29729">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29729");
const base = ref(29729);
const total = computed(() => base.value * 2);

function incrementar29729() {
  base.value++;
}
</script>
