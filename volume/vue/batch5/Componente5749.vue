<template>
  <section class="panel-5749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5749");
const base = ref(5749);
const total = computed(() => base.value * 2);

function incrementar5749() {
  base.value++;
}
</script>
