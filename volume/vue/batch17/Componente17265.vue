<template>
  <section class="panel-17265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17265");
const base = ref(17265);
const total = computed(() => base.value * 2);

function incrementar17265() {
  base.value++;
}
</script>
