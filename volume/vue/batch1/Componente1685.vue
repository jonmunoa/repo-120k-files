<template>
  <section class="panel-1685">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1685");
const base = ref(1685);
const total = computed(() => base.value * 2);

function incrementar1685() {
  base.value++;
}
</script>
