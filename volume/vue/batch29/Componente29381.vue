<template>
  <section class="panel-29381">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29381");
const base = ref(29381);
const total = computed(() => base.value * 2);

function incrementar29381() {
  base.value++;
}
</script>
