<template>
  <section class="panel-20269">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 20269");
const base = ref(20269);
const total = computed(() => base.value * 2);

function incrementar20269() {
  base.value++;
}
</script>
