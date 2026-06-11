<template>
  <section class="panel-44077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44077");
const base = ref(44077);
const total = computed(() => base.value * 2);

function incrementar44077() {
  base.value++;
}
</script>
