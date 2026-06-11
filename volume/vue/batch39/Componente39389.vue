<template>
  <section class="panel-39389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 39389");
const base = ref(39389);
const total = computed(() => base.value * 2);

function incrementar39389() {
  base.value++;
}
</script>
