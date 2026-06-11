<template>
  <section class="panel-42437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42437");
const base = ref(42437);
const total = computed(() => base.value * 2);

function incrementar42437() {
  base.value++;
}
</script>
