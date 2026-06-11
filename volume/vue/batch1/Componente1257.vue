<template>
  <section class="panel-1257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1257");
const base = ref(1257);
const total = computed(() => base.value * 2);

function incrementar1257() {
  base.value++;
}
</script>
