<template>
  <section class="panel-15617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15617");
const base = ref(15617);
const total = computed(() => base.value * 2);

function incrementar15617() {
  base.value++;
}
</script>
