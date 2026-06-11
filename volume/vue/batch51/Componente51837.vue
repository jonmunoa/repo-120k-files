<template>
  <section class="panel-51837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51837");
const base = ref(51837);
const total = computed(() => base.value * 2);

function incrementar51837() {
  base.value++;
}
</script>
