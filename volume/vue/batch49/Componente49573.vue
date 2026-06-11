<template>
  <section class="panel-49573">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49573");
const base = ref(49573);
const total = computed(() => base.value * 2);

function incrementar49573() {
  base.value++;
}
</script>
