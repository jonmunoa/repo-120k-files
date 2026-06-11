<template>
  <section class="panel-14313">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14313");
const base = ref(14313);
const total = computed(() => base.value * 2);

function incrementar14313() {
  base.value++;
}
</script>
