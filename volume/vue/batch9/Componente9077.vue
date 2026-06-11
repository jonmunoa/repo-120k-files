<template>
  <section class="panel-9077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9077");
const base = ref(9077);
const total = computed(() => base.value * 2);

function incrementar9077() {
  base.value++;
}
</script>
