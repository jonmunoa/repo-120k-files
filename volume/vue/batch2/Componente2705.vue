<template>
  <section class="panel-2705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2705");
const base = ref(2705);
const total = computed(() => base.value * 2);

function incrementar2705() {
  base.value++;
}
</script>
