<template>
  <section class="panel-36333">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36333");
const base = ref(36333);
const total = computed(() => base.value * 2);

function incrementar36333() {
  base.value++;
}
</script>
