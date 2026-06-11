<template>
  <section class="panel-4617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4617");
const base = ref(4617);
const total = computed(() => base.value * 2);

function incrementar4617() {
  base.value++;
}
</script>
