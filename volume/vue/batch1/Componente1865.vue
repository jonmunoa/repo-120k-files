<template>
  <section class="panel-1865">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1865");
const base = ref(1865);
const total = computed(() => base.value * 2);

function incrementar1865() {
  base.value++;
}
</script>
