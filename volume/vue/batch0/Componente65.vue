<template>
  <section class="panel-65">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 65");
const base = ref(65);
const total = computed(() => base.value * 2);

function incrementar65() {
  base.value++;
}
</script>
