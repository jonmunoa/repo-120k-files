<template>
  <section class="panel-7077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7077");
const base = ref(7077);
const total = computed(() => base.value * 2);

function incrementar7077() {
  base.value++;
}
</script>
