<template>
  <section class="panel-56265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 56265");
const base = ref(56265);
const total = computed(() => base.value * 2);

function incrementar56265() {
  base.value++;
}
</script>
