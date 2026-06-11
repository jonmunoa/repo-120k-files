<template>
  <section class="panel-49569">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49569");
const base = ref(49569);
const total = computed(() => base.value * 2);

function incrementar49569() {
  base.value++;
}
</script>
