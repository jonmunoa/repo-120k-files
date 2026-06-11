<template>
  <section class="panel-33265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33265");
const base = ref(33265);
const total = computed(() => base.value * 2);

function incrementar33265() {
  base.value++;
}
</script>
