<template>
  <section class="panel-7145">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7145");
const base = ref(7145);
const total = computed(() => base.value * 2);

function incrementar7145() {
  base.value++;
}
</script>
