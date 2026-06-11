<template>
  <section class="panel-44209">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44209");
const base = ref(44209);
const total = computed(() => base.value * 2);

function incrementar44209() {
  base.value++;
}
</script>
