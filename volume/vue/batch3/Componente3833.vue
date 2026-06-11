<template>
  <section class="panel-3833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 3833");
const base = ref(3833);
const total = computed(() => base.value * 2);

function incrementar3833() {
  base.value++;
}
</script>
