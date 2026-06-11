<template>
  <section class="panel-20473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20473");
const base = ref(20473);
const total = computed(() => base.value * 2);

function incrementar20473() {
  base.value++;
}
</script>
