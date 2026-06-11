<template>
  <section class="panel-44965">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44965");
const base = ref(44965);
const total = computed(() => base.value * 2);

function incrementar44965() {
  base.value++;
}
</script>
