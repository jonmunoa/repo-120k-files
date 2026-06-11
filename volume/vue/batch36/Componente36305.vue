<template>
  <section class="panel-36305">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36305");
const base = ref(36305);
const total = computed(() => base.value * 2);

function incrementar36305() {
  base.value++;
}
</script>
