<template>
  <section class="panel-20837">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20837");
const base = ref(20837);
const total = computed(() => base.value * 2);

function incrementar20837() {
  base.value++;
}
</script>
