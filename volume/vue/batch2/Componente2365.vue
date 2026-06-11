<template>
  <section class="panel-2365">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 2365");
const base = ref(2365);
const total = computed(() => base.value * 2);

function incrementar2365() {
  base.value++;
}
</script>
