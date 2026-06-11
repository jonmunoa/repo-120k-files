<template>
  <section class="panel-38725">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38725");
const base = ref(38725);
const total = computed(() => base.value * 2);

function incrementar38725() {
  base.value++;
}
</script>
