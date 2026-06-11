<template>
  <section class="panel-23329">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23329");
const base = ref(23329);
const total = computed(() => base.value * 2);

function incrementar23329() {
  base.value++;
}
</script>
