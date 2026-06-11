<template>
  <section class="panel-51301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 51301");
const base = ref(51301);
const total = computed(() => base.value * 2);

function incrementar51301() {
  base.value++;
}
</script>
