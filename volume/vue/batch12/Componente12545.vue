<template>
  <section class="panel-12545">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12545");
const base = ref(12545);
const total = computed(() => base.value * 2);

function incrementar12545() {
  base.value++;
}
</script>
