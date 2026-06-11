<template>
  <section class="panel-49269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49269");
const base = ref(49269);
const total = computed(() => base.value * 2);

function incrementar49269() {
  base.value++;
}
</script>
