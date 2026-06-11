<template>
  <section class="panel-48405">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48405");
const base = ref(48405);
const total = computed(() => base.value * 2);

function incrementar48405() {
  base.value++;
}
</script>
