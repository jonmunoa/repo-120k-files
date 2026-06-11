<template>
  <section class="panel-42381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42381");
const base = ref(42381);
const total = computed(() => base.value * 2);

function incrementar42381() {
  base.value++;
}
</script>
