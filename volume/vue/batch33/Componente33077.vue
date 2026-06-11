<template>
  <section class="panel-33077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 33077");
const base = ref(33077);
const total = computed(() => base.value * 2);

function incrementar33077() {
  base.value++;
}
</script>
