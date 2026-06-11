<template>
  <section class="panel-10381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10381");
const base = ref(10381);
const total = computed(() => base.value * 2);

function incrementar10381() {
  base.value++;
}
</script>
