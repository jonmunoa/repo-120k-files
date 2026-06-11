<template>
  <section class="panel-48077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48077");
const base = ref(48077);
const total = computed(() => base.value * 2);

function incrementar48077() {
  base.value++;
}
</script>
