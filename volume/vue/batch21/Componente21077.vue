<template>
  <section class="panel-21077">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21077");
const base = ref(21077);
const total = computed(() => base.value * 2);

function incrementar21077() {
  base.value++;
}
</script>
