<template>
  <section class="panel-19725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19725");
const base = ref(19725);
const total = computed(() => base.value * 2);

function incrementar19725() {
  base.value++;
}
</script>
