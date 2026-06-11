<template>
  <section class="panel-6533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6533");
const base = ref(6533);
const total = computed(() => base.value * 2);

function incrementar6533() {
  base.value++;
}
</script>
