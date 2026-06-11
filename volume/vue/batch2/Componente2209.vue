<template>
  <section class="panel-2209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2209");
const base = ref(2209);
const total = computed(() => base.value * 2);

function incrementar2209() {
  base.value++;
}
</script>
