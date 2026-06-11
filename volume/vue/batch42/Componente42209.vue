<template>
  <section class="panel-42209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42209");
const base = ref(42209);
const total = computed(() => base.value * 2);

function incrementar42209() {
  base.value++;
}
</script>
