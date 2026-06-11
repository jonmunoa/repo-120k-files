<template>
  <section class="panel-6953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 6953");
const base = ref(6953);
const total = computed(() => base.value * 2);

function incrementar6953() {
  base.value++;
}
</script>
