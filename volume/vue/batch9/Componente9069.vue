<template>
  <section class="panel-9069">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9069");
const base = ref(9069);
const total = computed(() => base.value * 2);

function incrementar9069() {
  base.value++;
}
</script>
