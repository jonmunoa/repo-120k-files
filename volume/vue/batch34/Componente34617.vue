<template>
  <section class="panel-34617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34617");
const base = ref(34617);
const total = computed(() => base.value * 2);

function incrementar34617() {
  base.value++;
}
</script>
