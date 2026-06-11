<template>
  <section class="panel-7705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 7705");
const base = ref(7705);
const total = computed(() => base.value * 2);

function incrementar7705() {
  base.value++;
}
</script>
