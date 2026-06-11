<template>
  <section class="panel-44389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 44389");
const base = ref(44389);
const total = computed(() => base.value * 2);

function incrementar44389() {
  base.value++;
}
</script>
