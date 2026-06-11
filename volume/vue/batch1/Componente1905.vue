<template>
  <section class="panel-1905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 1905");
const base = ref(1905);
const total = computed(() => base.value * 2);

function incrementar1905() {
  base.value++;
}
</script>
