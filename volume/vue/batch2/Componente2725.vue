<template>
  <section class="panel-2725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2725");
const base = ref(2725);
const total = computed(() => base.value * 2);

function incrementar2725() {
  base.value++;
}
</script>
