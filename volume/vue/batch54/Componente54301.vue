<template>
  <section class="panel-54301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54301");
const base = ref(54301);
const total = computed(() => base.value * 2);

function incrementar54301() {
  base.value++;
}
</script>
