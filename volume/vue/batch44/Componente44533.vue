<template>
  <section class="panel-44533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44533");
const base = ref(44533);
const total = computed(() => base.value * 2);

function incrementar44533() {
  base.value++;
}
</script>
