<template>
  <section class="panel-13473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13473");
const base = ref(13473);
const total = computed(() => base.value * 2);

function incrementar13473() {
  base.value++;
}
</script>
