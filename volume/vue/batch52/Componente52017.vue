<template>
  <section class="panel-52017">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52017");
const base = ref(52017);
const total = computed(() => base.value * 2);

function incrementar52017() {
  base.value++;
}
</script>
