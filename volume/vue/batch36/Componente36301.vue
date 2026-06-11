<template>
  <section class="panel-36301">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 36301");
const base = ref(36301);
const total = computed(() => base.value * 2);

function incrementar36301() {
  base.value++;
}
</script>
