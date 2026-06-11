<template>
  <section class="panel-54761">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54761");
const base = ref(54761);
const total = computed(() => base.value * 2);

function incrementar54761() {
  base.value++;
}
</script>
