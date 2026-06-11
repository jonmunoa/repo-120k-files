<template>
  <section class="panel-31689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31689");
const base = ref(31689);
const total = computed(() => base.value * 2);

function incrementar31689() {
  base.value++;
}
</script>
