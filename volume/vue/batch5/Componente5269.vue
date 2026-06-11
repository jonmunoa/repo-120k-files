<template>
  <section class="panel-5269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5269");
const base = ref(5269);
const total = computed(() => base.value * 2);

function incrementar5269() {
  base.value++;
}
</script>
