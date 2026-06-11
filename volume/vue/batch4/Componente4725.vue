<template>
  <section class="panel-4725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 4725");
const base = ref(4725);
const total = computed(() => base.value * 2);

function incrementar4725() {
  base.value++;
}
</script>
