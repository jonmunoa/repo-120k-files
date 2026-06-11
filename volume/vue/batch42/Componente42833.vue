<template>
  <section class="panel-42833">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 42833");
const base = ref(42833);
const total = computed(() => base.value * 2);

function incrementar42833() {
  base.value++;
}
</script>
