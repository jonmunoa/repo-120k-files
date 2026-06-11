<template>
  <section class="panel-29773">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29773");
const base = ref(29773);
const total = computed(() => base.value * 2);

function incrementar29773() {
  base.value++;
}
</script>
