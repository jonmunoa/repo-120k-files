<template>
  <section class="panel-517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 517");
const base = ref(517);
const total = computed(() => base.value * 2);

function incrementar517() {
  base.value++;
}
</script>
