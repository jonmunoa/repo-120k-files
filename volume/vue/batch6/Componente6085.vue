<template>
  <section class="panel-6085">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6085");
const base = ref(6085);
const total = computed(() => base.value * 2);

function incrementar6085() {
  base.value++;
}
</script>
