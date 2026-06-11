<template>
  <section class="panel-1053">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1053");
const base = ref(1053);
const total = computed(() => base.value * 2);

function incrementar1053() {
  base.value++;
}
</script>
