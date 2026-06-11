<template>
  <section class="panel-36689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36689");
const base = ref(36689);
const total = computed(() => base.value * 2);

function incrementar36689() {
  base.value++;
}
</script>
