<template>
  <section class="panel-25473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 25473");
const base = ref(25473);
const total = computed(() => base.value * 2);

function incrementar25473() {
  base.value++;
}
</script>
