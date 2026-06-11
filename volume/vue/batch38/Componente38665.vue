<template>
  <section class="panel-38665">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38665");
const base = ref(38665);
const total = computed(() => base.value * 2);

function incrementar38665() {
  base.value++;
}
</script>
