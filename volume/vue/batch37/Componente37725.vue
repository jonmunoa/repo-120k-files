<template>
  <section class="panel-37725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 37725");
const base = ref(37725);
const total = computed(() => base.value * 2);

function incrementar37725() {
  base.value++;
}
</script>
