<template>
  <section class="panel-1689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1689");
const base = ref(1689);
const total = computed(() => base.value * 2);

function incrementar1689() {
  base.value++;
}
</script>
