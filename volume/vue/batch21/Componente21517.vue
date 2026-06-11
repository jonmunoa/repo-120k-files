<template>
  <section class="panel-21517">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21517");
const base = ref(21517);
const total = computed(() => base.value * 2);

function incrementar21517() {
  base.value++;
}
</script>
