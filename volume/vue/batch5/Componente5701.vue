<template>
  <section class="panel-5701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5701");
const base = ref(5701);
const total = computed(() => base.value * 2);

function incrementar5701() {
  base.value++;
}
</script>
