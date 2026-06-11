<template>
  <section class="panel-38701">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38701");
const base = ref(38701);
const total = computed(() => base.value * 2);

function incrementar38701() {
  base.value++;
}
</script>
