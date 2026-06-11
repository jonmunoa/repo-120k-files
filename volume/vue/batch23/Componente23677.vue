<template>
  <section class="panel-23677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23677");
const base = ref(23677);
const total = computed(() => base.value * 2);

function incrementar23677() {
  base.value++;
}
</script>
