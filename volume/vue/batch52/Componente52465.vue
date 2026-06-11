<template>
  <section class="panel-52465">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52465");
const base = ref(52465);
const total = computed(() => base.value * 2);

function incrementar52465() {
  base.value++;
}
</script>
