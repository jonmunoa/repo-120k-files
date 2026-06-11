<template>
  <section class="panel-36141">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36141");
const base = ref(36141);
const total = computed(() => base.value * 2);

function incrementar36141() {
  base.value++;
}
</script>
