<template>
  <section class="panel-6169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6169");
const base = ref(6169);
const total = computed(() => base.value * 2);

function incrementar6169() {
  base.value++;
}
</script>
