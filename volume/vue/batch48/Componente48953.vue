<template>
  <section class="panel-48953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 48953");
const base = ref(48953);
const total = computed(() => base.value * 2);

function incrementar48953() {
  base.value++;
}
</script>
