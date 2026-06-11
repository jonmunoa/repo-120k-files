<template>
  <section class="panel-31077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 31077");
const base = ref(31077);
const total = computed(() => base.value * 2);

function incrementar31077() {
  base.value++;
}
</script>
