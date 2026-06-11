<template>
  <section class="panel-617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 617");
const base = ref(617);
const total = computed(() => base.value * 2);

function incrementar617() {
  base.value++;
}
</script>
