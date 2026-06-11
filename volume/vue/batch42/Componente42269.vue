<template>
  <section class="panel-42269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42269");
const base = ref(42269);
const total = computed(() => base.value * 2);

function incrementar42269() {
  base.value++;
}
</script>
