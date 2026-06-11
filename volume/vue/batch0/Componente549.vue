<template>
  <section class="panel-549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 549");
const base = ref(549);
const total = computed(() => base.value * 2);

function incrementar549() {
  base.value++;
}
</script>
