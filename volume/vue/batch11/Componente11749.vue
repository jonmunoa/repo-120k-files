<template>
  <section class="panel-11749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 11749");
const base = ref(11749);
const total = computed(() => base.value * 2);

function incrementar11749() {
  base.value++;
}
</script>
