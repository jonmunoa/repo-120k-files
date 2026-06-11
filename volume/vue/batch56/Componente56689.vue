<template>
  <section class="panel-56689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56689");
const base = ref(56689);
const total = computed(() => base.value * 2);

function incrementar56689() {
  base.value++;
}
</script>
