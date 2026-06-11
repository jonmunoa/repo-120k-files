<template>
  <section class="panel-9137">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9137");
const base = ref(9137);
const total = computed(() => base.value * 2);

function incrementar9137() {
  base.value++;
}
</script>
