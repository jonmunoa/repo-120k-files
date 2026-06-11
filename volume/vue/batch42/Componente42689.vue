<template>
  <section class="panel-42689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42689");
const base = ref(42689);
const total = computed(() => base.value * 2);

function incrementar42689() {
  base.value++;
}
</script>
