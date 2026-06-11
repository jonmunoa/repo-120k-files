<template>
  <section class="panel-54677">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54677");
const base = ref(54677);
const total = computed(() => base.value * 2);

function incrementar54677() {
  base.value++;
}
</script>
