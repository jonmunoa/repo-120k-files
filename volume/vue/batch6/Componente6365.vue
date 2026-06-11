<template>
  <section class="panel-6365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6365");
const base = ref(6365);
const total = computed(() => base.value * 2);

function incrementar6365() {
  base.value++;
}
</script>
