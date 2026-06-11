<template>
  <section class="panel-24617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24617");
const base = ref(24617);
const total = computed(() => base.value * 2);

function incrementar24617() {
  base.value++;
}
</script>
