<template>
  <section class="panel-52993">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52993");
const base = ref(52993);
const total = computed(() => base.value * 2);

function incrementar52993() {
  base.value++;
}
</script>
