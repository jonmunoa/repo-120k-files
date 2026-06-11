<template>
  <section class="panel-16461">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16461");
const base = ref(16461);
const total = computed(() => base.value * 2);

function incrementar16461() {
  base.value++;
}
</script>
