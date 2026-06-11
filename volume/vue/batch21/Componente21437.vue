<template>
  <section class="panel-21437">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21437");
const base = ref(21437);
const total = computed(() => base.value * 2);

function incrementar21437() {
  base.value++;
}
</script>
