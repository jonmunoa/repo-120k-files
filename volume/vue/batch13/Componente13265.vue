<template>
  <section class="panel-13265">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 13265");
const base = ref(13265);
const total = computed(() => base.value * 2);

function incrementar13265() {
  base.value++;
}
</script>
