<template>
  <section class="panel-10077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10077");
const base = ref(10077);
const total = computed(() => base.value * 2);

function incrementar10077() {
  base.value++;
}
</script>
