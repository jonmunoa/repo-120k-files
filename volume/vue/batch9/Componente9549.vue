<template>
  <section class="panel-9549">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 9549");
const base = ref(9549);
const total = computed(() => base.value * 2);

function incrementar9549() {
  base.value++;
}
</script>
