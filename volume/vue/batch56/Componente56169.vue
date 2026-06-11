<template>
  <section class="panel-56169">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56169");
const base = ref(56169);
const total = computed(() => base.value * 2);

function incrementar56169() {
  base.value++;
}
</script>
