<template>
  <section class="panel-48213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48213");
const base = ref(48213);
const total = computed(() => base.value * 2);

function incrementar48213() {
  base.value++;
}
</script>
