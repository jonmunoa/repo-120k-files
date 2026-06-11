<template>
  <section class="panel-19953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 19953");
const base = ref(19953);
const total = computed(() => base.value * 2);

function incrementar19953() {
  base.value++;
}
</script>
