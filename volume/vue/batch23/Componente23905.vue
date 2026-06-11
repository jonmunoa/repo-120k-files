<template>
  <section class="panel-23905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23905");
const base = ref(23905);
const total = computed(() => base.value * 2);

function incrementar23905() {
  base.value++;
}
</script>
