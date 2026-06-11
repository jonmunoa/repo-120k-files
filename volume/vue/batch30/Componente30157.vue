<template>
  <section class="panel-30157">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30157");
const base = ref(30157);
const total = computed(() => base.value * 2);

function incrementar30157() {
  base.value++;
}
</script>
