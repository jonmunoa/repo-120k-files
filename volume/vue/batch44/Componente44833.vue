<template>
  <section class="panel-44833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44833");
const base = ref(44833);
const total = computed(() => base.value * 2);

function incrementar44833() {
  base.value++;
}
</script>
