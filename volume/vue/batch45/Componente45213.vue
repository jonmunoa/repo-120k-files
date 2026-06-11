<template>
  <section class="panel-45213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 45213");
const base = ref(45213);
const total = computed(() => base.value * 2);

function incrementar45213() {
  base.value++;
}
</script>
