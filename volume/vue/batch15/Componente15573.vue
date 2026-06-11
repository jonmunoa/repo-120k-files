<template>
  <section class="panel-15573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15573");
const base = ref(15573);
const total = computed(() => base.value * 2);

function incrementar15573() {
  base.value++;
}
</script>
