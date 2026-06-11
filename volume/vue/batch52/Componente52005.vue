<template>
  <section class="panel-52005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52005");
const base = ref(52005);
const total = computed(() => base.value * 2);

function incrementar52005() {
  base.value++;
}
</script>
