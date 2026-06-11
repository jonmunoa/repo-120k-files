<template>
  <section class="panel-24725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 24725");
const base = ref(24725);
const total = computed(() => base.value * 2);

function incrementar24725() {
  base.value++;
}
</script>
