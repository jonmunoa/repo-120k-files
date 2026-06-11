<template>
  <section class="panel-229">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 229");
const base = ref(229);
const total = computed(() => base.value * 2);

function incrementar229() {
  base.value++;
}
</script>
