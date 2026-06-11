<template>
  <section class="panel-49077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49077");
const base = ref(49077);
const total = computed(() => base.value * 2);

function incrementar49077() {
  base.value++;
}
</script>
