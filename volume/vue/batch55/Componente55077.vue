<template>
  <section class="panel-55077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55077");
const base = ref(55077);
const total = computed(() => base.value * 2);

function incrementar55077() {
  base.value++;
}
</script>
