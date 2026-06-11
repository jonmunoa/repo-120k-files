<template>
  <section class="panel-15741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15741");
const base = ref(15741);
const total = computed(() => base.value * 2);

function incrementar15741() {
  base.value++;
}
</script>
