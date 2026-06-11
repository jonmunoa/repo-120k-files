<template>
  <section class="panel-21949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21949");
const base = ref(21949);
const total = computed(() => base.value * 2);

function incrementar21949() {
  base.value++;
}
</script>
