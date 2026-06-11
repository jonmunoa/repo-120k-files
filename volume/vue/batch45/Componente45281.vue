<template>
  <section class="panel-45281">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45281");
const base = ref(45281);
const total = computed(() => base.value * 2);

function incrementar45281() {
  base.value++;
}
</script>
