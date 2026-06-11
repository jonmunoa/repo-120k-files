<template>
  <section class="panel-18517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18517");
const base = ref(18517);
const total = computed(() => base.value * 2);

function incrementar18517() {
  base.value++;
}
</script>
