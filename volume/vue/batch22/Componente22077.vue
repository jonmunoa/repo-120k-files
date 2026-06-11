<template>
  <section class="panel-22077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 22077");
const base = ref(22077);
const total = computed(() => base.value * 2);

function incrementar22077() {
  base.value++;
}
</script>
