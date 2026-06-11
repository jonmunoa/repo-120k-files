<template>
  <section class="panel-44893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44893");
const base = ref(44893);
const total = computed(() => base.value * 2);

function incrementar44893() {
  base.value++;
}
</script>
