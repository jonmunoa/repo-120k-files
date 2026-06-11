<template>
  <section class="panel-17909">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17909");
const base = ref(17909);
const total = computed(() => base.value * 2);

function incrementar17909() {
  base.value++;
}
</script>
