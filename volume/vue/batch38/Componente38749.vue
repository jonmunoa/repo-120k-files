<template>
  <section class="panel-38749">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 38749");
const base = ref(38749);
const total = computed(() => base.value * 2);

function incrementar38749() {
  base.value++;
}
</script>
