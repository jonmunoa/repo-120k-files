<template>
  <section class="panel-20197">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20197");
const base = ref(20197);
const total = computed(() => base.value * 2);

function incrementar20197() {
  base.value++;
}
</script>
