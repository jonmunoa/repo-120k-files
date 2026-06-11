<template>
  <section class="panel-16905">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 16905");
const base = ref(16905);
const total = computed(() => base.value * 2);

function incrementar16905() {
  base.value++;
}
</script>
