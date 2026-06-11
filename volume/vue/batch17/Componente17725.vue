<template>
  <section class="panel-17725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17725");
const base = ref(17725);
const total = computed(() => base.value * 2);

function incrementar17725() {
  base.value++;
}
</script>
