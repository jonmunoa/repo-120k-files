<template>
  <section class="panel-32573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32573");
const base = ref(32573);
const total = computed(() => base.value * 2);

function incrementar32573() {
  base.value++;
}
</script>
