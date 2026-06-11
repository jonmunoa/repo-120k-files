<template>
  <section class="panel-48469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48469");
const base = ref(48469);
const total = computed(() => base.value * 2);

function incrementar48469() {
  base.value++;
}
</script>
