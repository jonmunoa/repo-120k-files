<template>
  <section class="panel-49317">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49317");
const base = ref(49317);
const total = computed(() => base.value * 2);

function incrementar49317() {
  base.value++;
}
</script>
