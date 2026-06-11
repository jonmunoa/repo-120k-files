<template>
  <section class="panel-15705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15705");
const base = ref(15705);
const total = computed(() => base.value * 2);

function incrementar15705() {
  base.value++;
}
</script>
