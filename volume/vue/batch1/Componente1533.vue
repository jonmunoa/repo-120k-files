<template>
  <section class="panel-1533">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1533");
const base = ref(1533);
const total = computed(() => base.value * 2);

function incrementar1533() {
  base.value++;
}
</script>
