<template>
  <section class="panel-55649">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55649");
const base = ref(55649);
const total = computed(() => base.value * 2);

function incrementar55649() {
  base.value++;
}
</script>
