<template>
  <section class="panel-52925">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52925");
const base = ref(52925);
const total = computed(() => base.value * 2);

function incrementar52925() {
  base.value++;
}
</script>
