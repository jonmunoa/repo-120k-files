<template>
  <section class="panel-54945">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54945");
const base = ref(54945);
const total = computed(() => base.value * 2);

function incrementar54945() {
  base.value++;
}
</script>
