<template>
  <section class="panel-43605">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43605");
const base = ref(43605);
const total = computed(() => base.value * 2);

function incrementar43605() {
  base.value++;
}
</script>
