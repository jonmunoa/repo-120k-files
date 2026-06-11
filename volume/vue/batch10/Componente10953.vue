<template>
  <section class="panel-10953">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 10953");
const base = ref(10953);
const total = computed(() => base.value * 2);

function incrementar10953() {
  base.value++;
}
</script>
