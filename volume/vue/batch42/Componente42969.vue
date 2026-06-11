<template>
  <section class="panel-42969">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42969");
const base = ref(42969);
const total = computed(() => base.value * 2);

function incrementar42969() {
  base.value++;
}
</script>
