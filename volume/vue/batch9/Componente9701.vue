<template>
  <section class="panel-9701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9701");
const base = ref(9701);
const total = computed(() => base.value * 2);

function incrementar9701() {
  base.value++;
}
</script>
