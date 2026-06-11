<template>
  <section class="panel-55473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55473");
const base = ref(55473);
const total = computed(() => base.value * 2);

function incrementar55473() {
  base.value++;
}
</script>
