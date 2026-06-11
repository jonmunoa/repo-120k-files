<template>
  <section class="panel-44725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44725");
const base = ref(44725);
const total = computed(() => base.value * 2);

function incrementar44725() {
  base.value++;
}
</script>
