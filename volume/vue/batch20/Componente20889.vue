<template>
  <section class="panel-20889">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20889");
const base = ref(20889);
const total = computed(() => base.value * 2);

function incrementar20889() {
  base.value++;
}
</script>
