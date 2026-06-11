<template>
  <section class="panel-8473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 8473");
const base = ref(8473);
const total = computed(() => base.value * 2);

function incrementar8473() {
  base.value++;
}
</script>
