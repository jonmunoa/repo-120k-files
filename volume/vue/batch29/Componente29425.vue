<template>
  <section class="panel-29425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29425");
const base = ref(29425);
const total = computed(() => base.value * 2);

function incrementar29425() {
  base.value++;
}
</script>
