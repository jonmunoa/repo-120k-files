<template>
  <section class="panel-6049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6049");
const base = ref(6049);
const total = computed(() => base.value * 2);

function incrementar6049() {
  base.value++;
}
</script>
