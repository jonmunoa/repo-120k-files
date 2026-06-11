<template>
  <section class="panel-15701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15701");
const base = ref(15701);
const total = computed(() => base.value * 2);

function incrementar15701() {
  base.value++;
}
</script>
