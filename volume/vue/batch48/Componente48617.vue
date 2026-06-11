<template>
  <section class="panel-48617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48617");
const base = ref(48617);
const total = computed(() => base.value * 2);

function incrementar48617() {
  base.value++;
}
</script>
