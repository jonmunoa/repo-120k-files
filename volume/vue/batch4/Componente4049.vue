<template>
  <section class="panel-4049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4049");
const base = ref(4049);
const total = computed(() => base.value * 2);

function incrementar4049() {
  base.value++;
}
</script>
