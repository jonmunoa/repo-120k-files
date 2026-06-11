<template>
  <section class="panel-52685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52685");
const base = ref(52685);
const total = computed(() => base.value * 2);

function incrementar52685() {
  base.value++;
}
</script>
