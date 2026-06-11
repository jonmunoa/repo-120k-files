<template>
  <section class="panel-42113">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42113");
const base = ref(42113);
const total = computed(() => base.value * 2);

function incrementar42113() {
  base.value++;
}
</script>
