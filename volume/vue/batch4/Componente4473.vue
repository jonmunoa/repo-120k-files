<template>
  <section class="panel-4473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4473");
const base = ref(4473);
const total = computed(() => base.value * 2);

function incrementar4473() {
  base.value++;
}
</script>
