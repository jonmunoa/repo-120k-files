<template>
  <section class="panel-30881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30881");
const base = ref(30881);
const total = computed(() => base.value * 2);

function incrementar30881() {
  base.value++;
}
</script>
