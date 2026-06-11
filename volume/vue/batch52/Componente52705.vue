<template>
  <section class="panel-52705">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52705");
const base = ref(52705);
const total = computed(() => base.value * 2);

function incrementar52705() {
  base.value++;
}
</script>
