<template>
  <section class="panel-37833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37833");
const base = ref(37833);
const total = computed(() => base.value * 2);

function incrementar37833() {
  base.value++;
}
</script>
