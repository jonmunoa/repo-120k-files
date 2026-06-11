<template>
  <section class="panel-49257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49257");
const base = ref(49257);
const total = computed(() => base.value * 2);

function incrementar49257() {
  base.value++;
}
</script>
