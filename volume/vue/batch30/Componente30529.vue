<template>
  <section class="panel-30529">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 30529");
const base = ref(30529);
const total = computed(() => base.value * 2);

function incrementar30529() {
  base.value++;
}
</script>
