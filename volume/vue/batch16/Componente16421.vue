<template>
  <section class="panel-16421">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16421");
const base = ref(16421);
const total = computed(() => base.value * 2);

function incrementar16421() {
  base.value++;
}
</script>
