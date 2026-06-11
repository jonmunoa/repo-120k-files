<template>
  <section class="panel-39833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39833");
const base = ref(39833);
const total = computed(() => base.value * 2);

function incrementar39833() {
  base.value++;
}
</script>
