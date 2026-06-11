<template>
  <section class="panel-5049">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 5049");
const base = ref(5049);
const total = computed(() => base.value * 2);

function incrementar5049() {
  base.value++;
}
</script>
