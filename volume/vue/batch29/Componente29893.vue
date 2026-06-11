<template>
  <section class="panel-29893">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 29893");
const base = ref(29893);
const total = computed(() => base.value * 2);

function incrementar29893() {
  base.value++;
}
</script>
