<template>
  <section class="panel-16893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16893");
const base = ref(16893);
const total = computed(() => base.value * 2);

function incrementar16893() {
  base.value++;
}
</script>
