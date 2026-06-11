<template>
  <section class="panel-43509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43509");
const base = ref(43509);
const total = computed(() => base.value * 2);

function incrementar43509() {
  base.value++;
}
</script>
