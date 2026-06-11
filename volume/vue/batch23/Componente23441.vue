<template>
  <section class="panel-23441">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 23441");
const base = ref(23441);
const total = computed(() => base.value * 2);

function incrementar23441() {
  base.value++;
}
</script>
