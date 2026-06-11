<template>
  <section class="panel-14465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 14465");
const base = ref(14465);
const total = computed(() => base.value * 2);

function incrementar14465() {
  base.value++;
}
</script>
