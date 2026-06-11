<template>
  <section class="panel-31209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31209");
const base = ref(31209);
const total = computed(() => base.value * 2);

function incrementar31209() {
  base.value++;
}
</script>
