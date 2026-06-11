<template>
  <section class="panel-45077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45077");
const base = ref(45077);
const total = computed(() => base.value * 2);

function incrementar45077() {
  base.value++;
}
</script>
