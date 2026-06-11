<template>
  <section class="panel-45265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45265");
const base = ref(45265);
const total = computed(() => base.value * 2);

function incrementar45265() {
  base.value++;
}
</script>
