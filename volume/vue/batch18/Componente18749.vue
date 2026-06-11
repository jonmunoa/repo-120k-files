<template>
  <section class="panel-18749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 18749");
const base = ref(18749);
const total = computed(() => base.value * 2);

function incrementar18749() {
  base.value++;
}
</script>
