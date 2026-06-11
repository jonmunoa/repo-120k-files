<template>
  <section class="panel-12213">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 12213");
const base = ref(12213);
const total = computed(() => base.value * 2);

function incrementar12213() {
  base.value++;
}
</script>
