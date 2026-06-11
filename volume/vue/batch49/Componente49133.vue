<template>
  <section class="panel-49133">
    <h2>{{ titulo }}</h2>
    <span>{{ total }}</span>
  </section>
</template>

<script setup>
import { ref, computed } from "vue";

const titulo = ref("Panel 49133");
const base = ref(49133);
const total = computed(() => base.value * 2);

function incrementar49133() {
  base.value++;
}
</script>
