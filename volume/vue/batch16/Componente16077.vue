<template>
  <section class="panel-16077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16077");
const base = ref(16077);
const total = computed(() => base.value * 2);

function incrementar16077() {
  base.value++;
}
</script>
