<template>
  <section class="panel-54897">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 54897");
const base = ref(54897);
const total = computed(() => base.value * 2);

function incrementar54897() {
  base.value++;
}
</script>
