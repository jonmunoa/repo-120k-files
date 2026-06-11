<template>
  <section class="panel-39517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39517");
const base = ref(39517);
const total = computed(() => base.value * 2);

function incrementar39517() {
  base.value++;
}
</script>
