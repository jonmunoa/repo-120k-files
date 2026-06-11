<template>
  <section class="panel-24701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24701");
const base = ref(24701);
const total = computed(() => base.value * 2);

function incrementar24701() {
  base.value++;
}
</script>
