<template>
  <section class="panel-43533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43533");
const base = ref(43533);
const total = computed(() => base.value * 2);

function incrementar43533() {
  base.value++;
}
</script>
