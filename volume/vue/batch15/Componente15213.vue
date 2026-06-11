<template>
  <section class="panel-15213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 15213");
const base = ref(15213);
const total = computed(() => base.value * 2);

function incrementar15213() {
  base.value++;
}
</script>
