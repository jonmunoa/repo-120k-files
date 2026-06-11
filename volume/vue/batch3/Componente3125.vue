<template>
  <section class="panel-3125">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3125");
const base = ref(3125);
const total = computed(() => base.value * 2);

function incrementar3125() {
  base.value++;
}
</script>
