<template>
  <section class="panel-41881">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 41881");
const base = ref(41881);
const total = computed(() => base.value * 2);

function incrementar41881() {
  base.value++;
}
</script>
