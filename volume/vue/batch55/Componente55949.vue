<template>
  <section class="panel-55949">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55949");
const base = ref(55949);
const total = computed(() => base.value * 2);

function incrementar55949() {
  base.value++;
}
</script>
