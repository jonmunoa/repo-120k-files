<template>
  <section class="panel-34473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 34473");
const base = ref(34473);
const total = computed(() => base.value * 2);

function incrementar34473() {
  base.value++;
}
</script>
