<template>
  <section class="panel-6157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6157");
const base = ref(6157);
const total = computed(() => base.value * 2);

function incrementar6157() {
  base.value++;
}
</script>
