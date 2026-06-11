<template>
  <section class="panel-56005">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56005");
const base = ref(56005);
const total = computed(() => base.value * 2);

function incrementar56005() {
  base.value++;
}
</script>
