<template>
  <section class="panel-52669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 52669");
const base = ref(52669);
const total = computed(() => base.value * 2);

function incrementar52669() {
  base.value++;
}
</script>
