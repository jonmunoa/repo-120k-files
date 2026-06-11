<template>
  <section class="panel-36077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36077");
const base = ref(36077);
const total = computed(() => base.value * 2);

function incrementar36077() {
  base.value++;
}
</script>
