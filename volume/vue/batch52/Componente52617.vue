<template>
  <section class="panel-52617">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52617");
const base = ref(52617);
const total = computed(() => base.value * 2);

function incrementar52617() {
  base.value++;
}
</script>
