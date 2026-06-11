<template>
  <section class="panel-21509">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 21509");
const base = ref(21509);
const total = computed(() => base.value * 2);

function incrementar21509() {
  base.value++;
}
</script>
