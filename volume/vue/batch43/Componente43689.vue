<template>
  <section class="panel-43689">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43689");
const base = ref(43689);
const total = computed(() => base.value * 2);

function incrementar43689() {
  base.value++;
}
</script>
