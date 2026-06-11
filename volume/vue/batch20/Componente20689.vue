<template>
  <section class="panel-20689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20689");
const base = ref(20689);
const total = computed(() => base.value * 2);

function incrementar20689() {
  base.value++;
}
</script>
