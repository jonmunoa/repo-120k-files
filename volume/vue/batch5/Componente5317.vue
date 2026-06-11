<template>
  <section class="panel-5317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5317");
const base = ref(5317);
const total = computed(() => base.value * 2);

function incrementar5317() {
  base.value++;
}
</script>
