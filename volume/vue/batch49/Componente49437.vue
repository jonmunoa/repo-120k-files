<template>
  <section class="panel-49437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49437");
const base = ref(49437);
const total = computed(() => base.value * 2);

function incrementar49437() {
  base.value++;
}
</script>
