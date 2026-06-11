<template>
  <section class="panel-39893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39893");
const base = ref(39893);
const total = computed(() => base.value * 2);

function incrementar39893() {
  base.value++;
}
</script>
