<template>
  <section class="panel-17549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 17549");
const base = ref(17549);
const total = computed(() => base.value * 2);

function incrementar17549() {
  base.value++;
}
</script>
