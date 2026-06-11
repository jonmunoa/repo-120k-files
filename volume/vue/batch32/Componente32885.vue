<template>
  <section class="panel-32885">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 32885");
const base = ref(32885);
const total = computed(() => base.value * 2);

function incrementar32885() {
  base.value++;
}
</script>
