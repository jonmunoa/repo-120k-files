<template>
  <section class="panel-469">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 469");
const base = ref(469);
const total = computed(() => base.value * 2);

function incrementar469() {
  base.value++;
}
</script>
