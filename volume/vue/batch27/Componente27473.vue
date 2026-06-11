<template>
  <section class="panel-27473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27473");
const base = ref(27473);
const total = computed(() => base.value * 2);

function incrementar27473() {
  base.value++;
}
</script>
