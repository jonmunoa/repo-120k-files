<template>
  <section class="panel-51381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51381");
const base = ref(51381);
const total = computed(() => base.value * 2);

function incrementar51381() {
  base.value++;
}
</script>
