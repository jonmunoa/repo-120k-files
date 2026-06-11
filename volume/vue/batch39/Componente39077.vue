<template>
  <section class="panel-39077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39077");
const base = ref(39077);
const total = computed(() => base.value * 2);

function incrementar39077() {
  base.value++;
}
</script>
