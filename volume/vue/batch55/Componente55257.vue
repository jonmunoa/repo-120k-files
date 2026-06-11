<template>
  <section class="panel-55257">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 55257");
const base = ref(55257);
const total = computed(() => base.value * 2);

function incrementar55257() {
  base.value++;
}
</script>
