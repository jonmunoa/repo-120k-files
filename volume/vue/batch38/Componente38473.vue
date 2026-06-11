<template>
  <section class="panel-38473">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38473");
const base = ref(38473);
const total = computed(() => base.value * 2);

function incrementar38473() {
  base.value++;
}
</script>
