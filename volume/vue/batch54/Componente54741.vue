<template>
  <section class="panel-54741">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54741");
const base = ref(54741);
const total = computed(() => base.value * 2);

function incrementar54741() {
  base.value++;
}
</script>
