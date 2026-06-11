<template>
  <section class="panel-6669">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6669");
const base = ref(6669);
const total = computed(() => base.value * 2);

function incrementar6669() {
  base.value++;
}
</script>
