<template>
  <section class="panel-22677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22677");
const base = ref(22677);
const total = computed(() => base.value * 2);

function incrementar22677() {
  base.value++;
}
</script>
