<template>
  <section class="panel-12189">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12189");
const base = ref(12189);
const total = computed(() => base.value * 2);

function incrementar12189() {
  base.value++;
}
</script>
