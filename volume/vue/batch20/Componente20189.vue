<template>
  <section class="panel-20189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20189");
const base = ref(20189);
const total = computed(() => base.value * 2);

function incrementar20189() {
  base.value++;
}
</script>
