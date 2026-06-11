<template>
  <section class="panel-56565">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56565");
const base = ref(56565);
const total = computed(() => base.value * 2);

function incrementar56565() {
  base.value++;
}
</script>
