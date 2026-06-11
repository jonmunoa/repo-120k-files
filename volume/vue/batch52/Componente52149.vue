<template>
  <section class="panel-52149">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52149");
const base = ref(52149);
const total = computed(() => base.value * 2);

function incrementar52149() {
  base.value++;
}
</script>
