<template>
  <section class="panel-27425">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 27425");
const base = ref(27425);
const total = computed(() => base.value * 2);

function incrementar27425() {
  base.value++;
}
</script>
