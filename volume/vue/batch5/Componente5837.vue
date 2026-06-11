<template>
  <section class="panel-5837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5837");
const base = ref(5837);
const total = computed(() => base.value * 2);

function incrementar5837() {
  base.value++;
}
</script>
