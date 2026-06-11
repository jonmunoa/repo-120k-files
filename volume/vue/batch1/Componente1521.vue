<template>
  <section class="panel-1521">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1521");
const base = ref(1521);
const total = computed(() => base.value * 2);

function incrementar1521() {
  base.value++;
}
</script>
