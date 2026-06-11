<template>
  <section class="panel-54705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54705");
const base = ref(54705);
const total = computed(() => base.value * 2);

function incrementar54705() {
  base.value++;
}
</script>
