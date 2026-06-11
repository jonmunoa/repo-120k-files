<template>
  <section class="panel-29533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29533");
const base = ref(29533);
const total = computed(() => base.value * 2);

function incrementar29533() {
  base.value++;
}
</script>
