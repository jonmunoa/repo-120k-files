<template>
  <section class="panel-44301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44301");
const base = ref(44301);
const total = computed(() => base.value * 2);

function incrementar44301() {
  base.value++;
}
</script>
