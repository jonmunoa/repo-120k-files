<template>
  <section class="panel-43389">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 43389");
const base = ref(43389);
const total = computed(() => base.value * 2);

function incrementar43389() {
  base.value++;
}
</script>
